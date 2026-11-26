#include "spotify/Track.h"
#include <utility>

namespace wavelab {

    Track::Track(QString title, QString artist, QString album, QUrl coverUrl, int durationMs)
        : m_title(std::move(title)), m_artist(std::move(artist)), m_album(std::move(album)),
        m_coverUrl(std::move(coverUrl)), m_durationMs(durationMs)
    {
    }

    const QString &Track::title() const { return m_title; }
    const QString &Track::artist() const { return m_artist; }
    const QString &Track::album() const { return m_album; }
    const QUrl &Track::coverUrl() const { return m_coverUrl; }
    int Track::durationMs() const { return m_durationMs; }
    bool Track::isValid() const { return !m_title.isEmpty(); }

}