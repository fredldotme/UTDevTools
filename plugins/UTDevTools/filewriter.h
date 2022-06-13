#ifndef FILEWRITER_H
#define FILEWRITER_H

#include <QObject>
#include <QUrl>

class FileWriter : public QObject
{
    Q_OBJECT

public:
    explicit FileWriter(QObject *parent = nullptr);

public slots:
    bool unpackAsset(const QUrl& url, const QString& path);

};

#endif // FILEWRITER_H
