#pragma once
#include <QString>
#include <QUrl>

namespace wavelab {

    class Track
    {
    public:
        Track() = default;
        Track(QString title, QString artist, QString album, QUrl coverUrl, int durationMs);

        const QString &title() const;
        const QString &artist() const;
        const QString &album() const;
        const QUrl &coverUrl() const;
        int durationMs() const;
        bool isValid() const;

    private:
        QString m_title;
        QString m_artist;
        QString m_album;
        QUrl m_coverUrl;
        int m_durationMs = 0;
    };

}