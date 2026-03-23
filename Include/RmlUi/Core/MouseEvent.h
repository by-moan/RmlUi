#pragma once

namespace Rml{
	class Element;
	class MouseEvent {
		public:
		Rml::Element* target = nullptr;
		int clientX = 0;
		int clientY = 0;
		int movementX = 0;
		int movementY = 0;
		int button = 0;
		int buttons = 0;
		int layerX = 0;
		int layerY = 0;
		
		MouseEvent();
		MouseEvent(int val);
		MouseEvent(int clientX, int clientY, int movementX, int movementY);
		MouseEvent(int clientX, int clientY, int movementX, int movementY, int button);
		MouseEvent(int clientX, int clientY, int movementX, int movementY, int button, int buttons);
		MouseEvent(int clientX, int clientY, int movementX, int movementY, int button, int buttons, Rml::Element* target, int layerX, int layerY);
	};
}

