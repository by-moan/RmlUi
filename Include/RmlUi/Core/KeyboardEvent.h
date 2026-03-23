#pragma once
namespace Rml{
	class KeyboardEvent{
		public:
		bool altKey = false;
		std::string code = "";
		bool ctrlKey = false;
		bool isComposing = false;
		std::string key = "";
		int location = 0;
		bool metaKey = false;
		bool repeat = false;
		bool shiftKey = false;
		
		KeyboardEvent();
		KeyboardEvent(int val);
	};
}