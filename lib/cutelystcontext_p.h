#ifndef CUTELYSTCONTEXT_P_H
#define CUTELYSTCONTEXT_P_H

#include "cutelystcontext.h"

class CutelystContextPrivate
{
//    Q_DECLARE_PUBLIC(CutelystContext)
public:
    CutelystContextPrivate(CutelystContext *parent);

    CutelystRequest *request;
    CutelystResponse *response;
    CutelystAction *action;
    CutelystDispatcher *dispatcher;
    QString match;
};

#endif // CUTELYSTCONTEXT_P_H
