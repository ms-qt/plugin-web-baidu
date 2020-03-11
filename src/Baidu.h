//
// Created by 毛华伟 on 2020/1/6.
//

#ifndef PLUGIN_BAIDU_H
#define PLUGIN_BAIDU_H

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QObject>
#include <QQmlApplicationEngine>
#include <QtWebEngine>

#include <bdlbsc/app/plugin/interface/IAppPluginInterface.h>
#include <bdlbsc/app/plugin/interface/PluginMetaData.h>


#include "plugin-baidu_global.h"

class PLUGINBAIDU_EXPORT Baidu : public bdlbsc::IAppPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID BDLBSC_APP_PLUGIN_INTERFACE_IID FILE "manifest.json")
    Q_INTERFACES(bdlbsc::IAppPluginInterface)
public:
    Baidu();
    ~Baidu() override;

    void loader() override;

signals:

    void sendMessage(bdlbsc::PluginMetaData *data) override;

public slots:

    void receiveMessage(bdlbsc::PluginMetaData *data) override;

private:
    QQmlApplicationEngine engine;
};

#endif //PLUGIN_BAIDU_H