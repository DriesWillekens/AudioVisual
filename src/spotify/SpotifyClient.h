#pragma once
#include <QObject>
#include "spotify/Track.h"

namespace wavelab {

    class SpotifyClient : public QObject
    {
        Q_OBJECT
    public:
        explicit SpotifyClient(QObject *parent = nullptr);

        void login();
        bool isLoggedIn() const;

    signals:
        void loggedIn();
        void trackChanged(const wavelab::Track &track);

    private:
        bool m_loggedIn = false;
    };

}