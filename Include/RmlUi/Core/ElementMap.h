namespace Rml {
    namespace _a_E_D {
		class ElementPtr_Handler {
			public:
			ElementPtr ownedElement;
			ElementPtr_Handler(ElementPtr element);
		};
        #ifndef ___EMAP_INCLUDE
		std::unordered_map<Rml::Element*,ElementPtr_Handler*> elementMap;
        #else
        extern std::unordered_map<Rml::Element*,ElementPtr_Handler*> elementMap;
        #endif
    }
}