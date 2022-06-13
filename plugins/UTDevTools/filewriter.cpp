#include "filewriter.h"

#include <QDebug>
#include <QFile>
#include <QTextStream>

FileWriter::FileWriter(QObject *parent) : QObject(parent)
{
}

bool FileWriter::unpackAsset(const QUrl& url, const QString& path)
{
    QFile asset(url);

    if (!asset.exists()) {
        qWarning() << "Asset not found:" << url;
        return false;
    }

    if (!asset.open(QFile::ReadOnly)) {
        qWarning() << "Asset could not be opened:" << url;
        return false;
    }

    QFile target(path);
    if (!target.open(QFile::ReadWrite)) {
        qWarning() << "Target not creatable:" << path;
        return false;
    }

    const QByteArray contents = asset.readAll();
    QTextStream textStream(&target);
    textStream << contents;
    textStream.flush();
    return true;
}
