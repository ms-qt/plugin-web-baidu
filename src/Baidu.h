//
// Created by 毛华伟 on 2020/1/6.
//

#ifndef PLUGIN_BAIDU_H
#define PLUGIN_BAIDU_H


#include <QObject>
#include <QQmlApplicationEngine>
#include <QDebug>
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QtWebEngine>

#include <apppluginterface/IAppPluginInterface.h>
#include <apppluginterface/PluginMetaData.h>


#include "plugin-baidu_global.h"


class PLUGINBAIDU_EXPORT Baidu : public IAppPluginInterface
{
Q_OBJECT
    Q_PLUGIN_METADATA(IID
                              IAppPluginInterface_iid
                              FILE
                              "pluginconfig.json")
    Q_INTERFACES(IAppPluginInterface)
public:

    Baidu();
    ~Baidu() override;

    void loader() override;


signals:

    void sendMessage(PluginMetaData *data) override;

public slots:

    void receiveMessage(PluginMetaData *data) override;


private:
    QQmlApplicationEngine engine;

};


#endif //PLUGIN_BAIDU_H