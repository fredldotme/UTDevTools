/*
 * Copyright (C) 2022  Alfred Neumayer
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 3.
 *
 * devtools is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <QtQml>
#include <QtQml/QQmlContext>

#include "plugin.h"
#include "utils.h"

void UTDevToolsPlugin::registerTypes(const char *uri) {
    //@uri Example
    qmlRegisterSingletonType<Utils>(uri, 1, 0, "Utils", [](QQmlEngine*, QJSEngine*) -> QObject* { return new Utils; });
}