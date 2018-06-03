/******************************************************************************
 * THIS FILE IS GENERATED - ANY EDITS WILL BE OVERWRITTEN
 */

#pragma once

#include "jobs/basejob.h"

#include <QtCore/QJsonObject>
#include "converters.h"
#include <QtCore/QVector>

namespace QMatrixClient
{
    // Operations

    class CreateRoomJob : public BaseJob
    {
        public:
            // Inner data structures

            struct Invite3pid
            {
                QString idServer;
                QString medium;
                QString address;
            };

            struct StateEvent
            {
                QString type;
                QString stateKey;
                QJsonObject content;
            };

            // Construction/destruction

            explicit CreateRoomJob(const QString& visibility = {}, const QString& roomAliasName = {}, const QString& name = {}, const QString& topic = {}, const QStringList& invite = {}, const QVector<Invite3pid>& invite3pid = {}, const QJsonObject& creationContent = {}, const QVector<StateEvent>& initialState = {}, const QString& preset = {}, bool isDirect = false, bool guestCanJoin = false);
            ~CreateRoomJob() override;

            // Result properties

            const QString& roomId() const;

        protected:
            Status parseJson(const QJsonDocument& data) override;

        private:
            class Private;
            QScopedPointer<Private> d;
    };
} // namespace QMatrixClient