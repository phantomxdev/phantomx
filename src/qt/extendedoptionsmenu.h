#ifndef EXTENDEDOPTIONSMENU_H
#define EXTENDEDOPTIONSMENU_H

#include <QDialog>
#include <QNetworkAccessManager>
#include <QUrl>
#include "JlCompress.h"


class QDialogButtonBox;
class QFile;
class QLabel;
class QLineEdit;
class QProgressDialog;
class QPushButton;
class QSslError;
class QAuthenticator;
class QNetworkReply;

namespace Ui {
class ExtendedOptionsMenu;
}

class ExtendedOptionsMenu : public QWidget
{
    Q_OBJECT

public:
    explicit ExtendedOptionsMenu(QWidget *parent = 0);
    void startRequest(QUrl url);
    void DecompressDir(QString ZipFile, QString Directory);
    bool copy_dir_recursive(QString from_dir, QString to_dir, bool replace_on_conflit);
    ~ExtendedOptionsMenu();

private slots:
    void on_buttonForceFastSync_clicked();
    //void downloadFile();
    void cancelDownload();
    void httpFinished();
    void httpReadyRead();
    void updateDataReadProgress(qint64 bytesRead, qint64 totalBytes);
    void enableDownloadButton();
   // void slotAuthenticationRequired(QNetworkReply*,QAuthenticator *);
#ifndef QT_NO_SSL
    //void sslErrors(QNetworkReply*,const QList<QSslError> &errors);
#endif

private:
    QLabel *statusLabel;
    QProgressDialog *progressDialog;
    //QPushButton *buttonForceFastSync;
    //QDialogButtonBox *buttonBox;

    QUrl url;
    QNetworkAccessManager qnam;
    QNetworkReply *reply;
    QFile *file;
    int httpGetId;
    bool httpRequestAborted;
    Ui::ExtendedOptionsMenu *ui;
};

#endif // EXTENDEDOPTIONSMENU_H
