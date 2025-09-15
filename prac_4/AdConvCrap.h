#pragma once 

#include<memory>

class AdConvCrap{
    public:

    int getSesstionId();
    void setSessionId(int id);

    std::shared_ptr<AdConvCrap> clonePtr();

    int sessionId;
};
