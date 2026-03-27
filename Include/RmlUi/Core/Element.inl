namespace Rml {
	#ifdef JSSYNTAX_CPP
	// int Element::addEventListener(const String& event, std::function<void(MouseEvent)>&& listener){
	// 	std::cout << ::EventDispatcher << "\n" << MClickEventListenersIndex.get() << "\n";
	// 	if(event == "click") {
	// 		int savedIndex = (*MClickEventListenersIndex);
	// 		::EventDispatcher->DISPATCH_UI_MCLICK->push_back(new std::function<void(MouseEvent)>(std::move(listener)));
	// 		(*MClickEventListenersIndex)++;
	// 		auto& fn = *(::EventDispatcher->DISPATCH_UI_MCLICK->at(savedIndex));
	// 		::EventDispatcher->DISPATCH_MCLICK->push_back(
	// 			new std::function<void(MouseEvent)>(
	// 				[fn, this](MouseEvent evt) {
	// 					if (__SFML_API::RmlUIcontext == nullptr) return;
						
	// 					Rml::Element* target =
	// 					__SFML_API::RmlUIcontext->GetElementAtPoint(
	// 						Rml::Vector2f{(float)evt.clientX, (float)evt.clientY}
	// 					);
						
	// 					if (target == this) {
	// 						MouseEvent _evt_sent(
	// 							evt.clientX, evt.clientY,
	// 							0, 0,
	// 							evt.button, evt.buttons,
	// 							this,
	// 							0, 0
	// 						);
							
	// 						fn(_evt_sent);
	// 					}
	// 				}
	// 			)
	// 		);
			
	// 		return (*MClickEventListenersIndex);
	// 	}
	// }
	// int Element::addEventListener(const String& event, std::function<void(MouseEvent)>* listener){
		// if(event == "click") {
		// 	int savedIndex = (*MClickEventListenersIndex);
		// 	::EventDispatcher->DISPATCH_UI_MCLICK->push_back(listener);
		// 	(*MClickEventListenersIndex)++;
		// 	auto& fn = *(::EventDispatcher->DISPATCH_UI_MCLICK->at(savedIndex));
		// 	::EventDispatcher->DISPATCH_MCLICK->push_back(new std::function<void(MouseEvent)>([fn,this](MouseEvent evt){
		// 		if(__SFML_API::RmlUIcontext == nullptr){
		// 			return;
		// 		}
		// 		Rml::Element* target = __SFML_API::RmlUIcontext->GetElementAtPoint(Rml::Vector2f{(float)evt.clientX, (float)evt.clientY});
		// 		if (target == this) {
		// 			MouseEvent _evt_sent = MouseEvent(evt.clientX, evt.clientY,0,0,evt.button,evt.buttons,this,0,0);
		// 			fn(_evt_sent);
		// 		}
		// 	}));
			
		// 	return (*MClickEventListenersIndex);
		// }
	// }
	#endif
	
	template <typename T>
	T Element::GetProperty(const String& name)
	{
		const Property* property = GetProperty(name);
		if (!property)
		{
			Log::Message(Log::LT_WARNING, "Invalid property name %s.", name.c_str());
			return T{};
		}
		return property->Get<T>();
	}
	
	template <typename T>
	void Element::SetAttribute(const String& name, const T& value)
	{
		Variant variant(value);
		attributes[name] = variant;
		ElementAttributes changed_attributes;
		changed_attributes.emplace(name, std::move(variant));
		OnAttributeChange(changed_attributes);
	}
	
	template <typename T>
	T Element::GetAttribute(const String& name, const T& default_value) const
	{
		return Get(attributes, name, default_value);
	}
	
} // namespace Rml
