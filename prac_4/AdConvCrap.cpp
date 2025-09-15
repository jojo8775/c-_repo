
#include "AdConvCrap.h"
#include <memory>
#include <iostream>

void AdConvCrap::setSessionId(int val){
    this->sessionId = val;
}

int AdConvCrap::getSesstionId(){
    return this->sessionId;
}

std::shared_ptr<AdConvCrap> AdConvCrap::clonePtr(){
    auto copy = std::make_shared<AdConvCrap>(*this);

    copy->sessionId = this->sessionId + 1;

    return copy;
}