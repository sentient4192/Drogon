#include "sock.h"
void sock::handleNewMessage(const WebSocketConnectionPtr &wsConnPtr, std::string &&message, const WebSocketMessageType &type)
{
    wsConnPtr->send("I received " + message);
}
void sock::handleNewConnection(const HttpRequestPtr &req, const WebSocketConnectionPtr &wsConnPtr)
{
    LOG_DEBUG << "new websocket connection!";
    wsConnPtr->send("hello");
}
void sock::handleConnectionClosed(const WebSocketConnectionPtr &wsConnPtr)
{
    LOG_DEBUG << "websocket closed!";
}
