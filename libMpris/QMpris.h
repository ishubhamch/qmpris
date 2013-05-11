#ifndef QMPRIS_HEADER
#define QMPRIS_HEADER

#include <QtGui>
#include <QtDBus/QtDBus>
#include <QtDBus/QDBusMessage>
#include <QtDBus/QDBusConnection>
 
#if defined QMPRIS
#define QMPRIS_COMMON_DLLSPEC  Q_DECL_EXPORT
#else
#define QMPRIS_COMMON_DLLSPEC Q_DECL_IMPORT
#endif

namespace QMpris{
    void testDiscovered();
    QStringList discoveredMprisPlayer();
    void playPause(QString destination);
    void playerOperation(QString destination, QString operation);
    void setVolume(QString destination,int sliderVal);
    double getPosition(QString service);
    void raisePlayer(QString destination);
}

extern "C" QMPRIS_COMMON_DLLSPEC void helloWorldByLib();
//extern "C" QMPRIS_COMMON_DLLSPEC QStringList discoveredMprisPlayer();
//extern "C" QMPRIS_COMMON_DLLSPEC void playPause(char * destination);
//extern "C" QMPRIS_COMMON_DLLSPEC void simpleOperation(char* destination, char* op);

#endif //QMPRIS_HEADER
