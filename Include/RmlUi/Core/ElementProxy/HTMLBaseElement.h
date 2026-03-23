#ifndef HTMLBaseElement_CPP
#include "../Element.h"
#endif

namespace Rml {
    class StyleManager_Style {
        String StyleName;
        Element* target;
        
        
        public:
        void setProperty(String name, String value);
        
        StyleManager_Style& operator=(String val);
        StyleManager_Style();
        StyleManager_Style(String stylename, Element* target);
    };
    
    class StyleManager {
        public:
        StyleManager_Style alignContent;
        StyleManager_Style alignItems;
        StyleManager_Style alignSelf;
        StyleManager_Style animation;
        StyleManager_Style animationDelay;
        StyleManager_Style animationDirection;
        StyleManager_Style animationDuration;
        StyleManager_Style animationFillMode;
        StyleManager_Style animationIterationCount;
        StyleManager_Style animationName;
        StyleManager_Style animationTimingFunction;
        StyleManager_Style animationPlayState;
        StyleManager_Style background;
        StyleManager_Style backgroundAttachment;
        StyleManager_Style backgroundColor;
        StyleManager_Style backgroundImage;
        StyleManager_Style backgroundPosition;
        StyleManager_Style backgroundRepeat;
        StyleManager_Style backgroundClip;
        StyleManager_Style backgroundOrigin;
        StyleManager_Style backgroundSize;
        StyleManager_Style backfaceVisibility;
        StyleManager_Style border;
        StyleManager_Style borderBottom;
        StyleManager_Style borderBottomColor;
        StyleManager_Style borderBottomLeftRadius;
        StyleManager_Style borderBottomRightRadius;
        StyleManager_Style borderBottomStyle;
        StyleManager_Style borderBottomWidth;
        StyleManager_Style borderCollapse;
        StyleManager_Style borderColor;
        StyleManager_Style borderImage;
        StyleManager_Style borderImageOutset;
        StyleManager_Style borderImageRepeat;
        StyleManager_Style borderImageSlice;
        StyleManager_Style borderImageSource;
        StyleManager_Style borderImageWidth;
        StyleManager_Style borderLeft;
        StyleManager_Style borderLeftColor;
        StyleManager_Style borderLeftStyle;
        StyleManager_Style borderLeftWidth;
        StyleManager_Style borderRadius;
        StyleManager_Style borderRight;
        StyleManager_Style borderRightColor;
        StyleManager_Style borderRightStyle;
        StyleManager_Style borderRightWidth;
        StyleManager_Style borderSpacing;
        StyleManager_Style borderStyle;
        StyleManager_Style borderTop;
        StyleManager_Style borderTopColor;
        StyleManager_Style borderTopLeftRadius;
        StyleManager_Style borderTopRightRadius;
        StyleManager_Style borderTopStyle;
        StyleManager_Style borderTopWidth;
        StyleManager_Style borderWidth;
        StyleManager_Style bottom;
        StyleManager_Style boxDecorationBreak;
        StyleManager_Style boxShadow;
        StyleManager_Style boxSizing;
        StyleManager_Style captionSide;
        StyleManager_Style caretColor;
        StyleManager_Style clear;
        StyleManager_Style clip;
        StyleManager_Style color;
        StyleManager_Style columnCount;
        StyleManager_Style columnFill;
        StyleManager_Style columnGap;
        StyleManager_Style columnRule;
        StyleManager_Style columnRuleColor;
        StyleManager_Style columnRuleStyle;
        StyleManager_Style columnRuleWidth;
        StyleManager_Style columns;
        StyleManager_Style columnSpan;
        StyleManager_Style columnWidth;
        StyleManager_Style content;
        StyleManager_Style counterIncrement;
        StyleManager_Style counterReset;
        StyleManager_Style cursor;
        StyleManager_Style direction;
        StyleManager_Style display;
        StyleManager_Style emptyCells;
        StyleManager_Style filter;
        StyleManager_Style flex;
        StyleManager_Style flexBasis;
        StyleManager_Style flexDirection;
        StyleManager_Style flexFlow;
        StyleManager_Style flexGrow;
        StyleManager_Style flexShrink;
        StyleManager_Style flexWrap;
        StyleManager_Style cssFloat;
        StyleManager_Style font;
        StyleManager_Style fontFamily;
        StyleManager_Style fontSize;
        StyleManager_Style fontStyle;
        StyleManager_Style fontVariant;
        StyleManager_Style fontWeight;
        StyleManager_Style fontSizeAdjust;
        StyleManager_Style fontStretch;
        StyleManager_Style hangingPunctuation;
        StyleManager_Style height;
        StyleManager_Style hyphens;
        StyleManager_Style icon;
        StyleManager_Style imageOrientation;
        StyleManager_Style isolation;
        StyleManager_Style justifyContent;
        StyleManager_Style left;
        StyleManager_Style letterSpacing;
        StyleManager_Style lineHeight;
        StyleManager_Style listStyle;
        StyleManager_Style listStyleImage;
        StyleManager_Style listStylePosition;
        StyleManager_Style listStyleType;
        StyleManager_Style margin;
        StyleManager_Style marginBottom;
        StyleManager_Style marginLeft;
        StyleManager_Style marginRight;
        StyleManager_Style marginTop;
        StyleManager_Style maxHeight;
        StyleManager_Style maxWidth;
        StyleManager_Style minHeight;
        StyleManager_Style minWidth;
        StyleManager_Style navDown;
        StyleManager_Style navIndex;
        StyleManager_Style navLeft;
        StyleManager_Style navRight;
        StyleManager_Style navUp;
        StyleManager_Style objectFit;
        StyleManager_Style objectPosition;
        StyleManager_Style opacity;
        StyleManager_Style order;
        StyleManager_Style orphans;
        StyleManager_Style outline;
        StyleManager_Style outlineColor;
        StyleManager_Style outlineOffset;
        StyleManager_Style outlineStyle;
        StyleManager_Style outlineWidth;
        StyleManager_Style overflow;
        StyleManager_Style overflowX;
        StyleManager_Style overflowY;
        StyleManager_Style padding;
        StyleManager_Style paddingBottom;
        StyleManager_Style paddingLeft;
        StyleManager_Style paddingRight;
        StyleManager_Style paddingTop;
        StyleManager_Style pageBreakAfter;
        StyleManager_Style pageBreakBefore;
        StyleManager_Style pageBreakInside;
        StyleManager_Style perspective;
        StyleManager_Style perspectiveOrigin;
        StyleManager_Style position;
        StyleManager_Style quotes;
        StyleManager_Style resize;
        StyleManager_Style right;
        StyleManager_Style scrollBehavior;
        StyleManager_Style tableLayout;
        StyleManager_Style tabSize;
        StyleManager_Style textAlign;
        StyleManager_Style textAlignLast;
        StyleManager_Style textDecoration;
        StyleManager_Style textDecorationColor;
        StyleManager_Style textDecorationLine;
        StyleManager_Style textDecorationStyle;
        StyleManager_Style textIndent;
        StyleManager_Style textJustify;
        StyleManager_Style textOverflow;
        StyleManager_Style textShadow;
        StyleManager_Style textTransform;
        StyleManager_Style top;
        StyleManager_Style transform;
        StyleManager_Style transformOrigin;
        StyleManager_Style transformStyle;
        StyleManager_Style transition;
        StyleManager_Style transitionProperty;
        StyleManager_Style transitionDuration;
        StyleManager_Style transitionTimingFunction;
        StyleManager_Style transitionDelay;
        StyleManager_Style unicodeBidi;
        StyleManager_Style userSelect;
        StyleManager_Style verticalAlign;
        StyleManager_Style visibility;
        StyleManager_Style whiteSpace;
        StyleManager_Style width;
        StyleManager_Style wordBreak;
        StyleManager_Style wordSpacing;
        StyleManager_Style wordWrap;
        StyleManager_Style widows;
        StyleManager_Style zIndex;
        Element* target;
        
        StyleManager& operator=(String v);
        
        StyleManager();
        StyleManager(Element* target);
    };
    
    class AttributeManager {
        Element* target;
        String attrName;
        AttributeManager(String attributeName, Element* target){
            this->target = target;
        }

        AttributeManager& operator=(String v){
            target->SetAttribute(attrName,v);
        }
    };
}

class HTMLBaseElement{
    Rml::Element* target;
    Rml::StyleManager style;

    void setProperty(const Rml::String& name, const Rml::String& value);
    void setProperty(const Rml::String& name, const int& value);
    void removeProperty(const Rml::String& name);
    template <typename T>
    void setAttribute(const Rml::String& name, const T& value);
    Rml::Variant* getAttribute(const Rml::String& name);
    const Rml::Variant* getAttribute(const Rml::String& name) const;
    // template <typename T>
    // T getAttribute(const Rml::String& name, const T& default_value) const{
    //     return target->getAttribute(name, default_value);
    // };
    bool hasAttribute(const Rml::String& name) const;
    void removeAttribute(const Rml::String& name);
    DOMRect getBoundingClientRect();
    void setInnerHTML(const Rml::String& html);
    
    Rml::String getInnerHTML();
    int addEventListener(const Rml::String& event, std::function<void(Rml::MouseEvent)>&& listener);
    int addEventListener(const Rml::String& event, std::function<void(Rml::MouseEvent)>* listener);
    void removeEventListener(const Rml::String& event, int eventId);
    void appendChild(Rml::Element* element, bool=true);
    
    Rml::Element* getElementById(const Rml::String& id);
    Rml::Element* querySelector(const Rml::String& selector);
};