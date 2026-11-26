#include "spotify/SpotifyClient.h"
#include <QDebug>

namespace wavelab {

    SpotifyClient::SpotifyClient(QObject *parent)
        : QObject(parent)
    {
    }

    void SpotifyClient::login()
    {
        qWarning() << "SpotifyClient::login() nog niet geimplementeerd (stap 6)";
    }

    bool SpotifyClient::isLoggedIn() const
    {
        return m_loggedIn;
    }

}