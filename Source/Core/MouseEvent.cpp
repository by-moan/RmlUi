#include "../../Include/RmlUi/Core/MouseEvent.h"

namespace Rml {
    MouseEvent::MouseEvent(){}
    MouseEvent::MouseEvent(int val){}
    MouseEvent::MouseEvent(int clientX, int clientY, int movementX, int movementY){
        this->clientX = clientX;
        this->clientY = clientY;
        this->movementX = movementX;
        this->movementY = movementY;
    }
    MouseEvent::MouseEvent(int clientX, int clientY, int movementX, int movementY, int button){
        this->clientX = clientX;
        this->clientY = clientY;
        this->movementX = movementX;
        this->movementY = movementY;
        this->button = button;
    }
    MouseEvent::MouseEvent(int clientX, int clientY, int movementX, int movementY, int button, int buttons){
        this->clientX = clientX;
        this->clientY = clientY;
        this->movementX = movementX;
        this->movementY = movementY;
        this->button = button;
        this->buttons = buttons;
    }
    MouseEvent::MouseEvent(int clientX, int clientY, int movementX, int movementY, int button, int buttons, Rml::Element* target, int layerX, int layerY){
        this->target = target;
        this->clientX = clientX;
        this->clientY = clientY;
        this->movementX = movementX;
        this->movementY = movementY;
        this->button = button;
        this->buttons = buttons;
        this->layerX = layerX;
        this->layerY = layerY;
    }
}