#include "../../../Include/RmlUi/Core/Element.h"
#include "../../../Include/RmlUi/Core/ElementMap.h"
#define HTMLBaseElement_CPP
#include "../../../Include/RmlUi/Core/ElementProxy/HTMLBaseElement.h"
#undef HTMLBaseElement_CPP
namespace Rml {
    StyleManager_Style::StyleManager_Style() = default;
    StyleManager_Style::StyleManager_Style(String stylename, Element* target){
        StyleName = stylename;
        this->target = target;
    }
    
    StyleManager_Style& StyleManager_Style::operator=(String val){
        target->SetProperty(StyleName,val);
        return *this;
    }
    
    void StyleManager_Style::setProperty(String name, String value){
        target->SetProperty(name, value);
    }
    
    StyleManager::StyleManager() = default;
    StyleManager::StyleManager(Element* target){
        alignContent = StyleManager_Style("align-content", target);
        alignItems = StyleManager_Style("align-items", target);
        alignSelf = StyleManager_Style("align-self", target);
        animation = StyleManager_Style("animation", target);
        animationDelay = StyleManager_Style("animation-delay", target);
        animationDirection = StyleManager_Style("animation-direction", target);
        animationDuration = StyleManager_Style("animation-duration", target);
        animationFillMode = StyleManager_Style("animation-fillMode", target);
        animationIterationCount = StyleManager_Style("animation-iteration-count", target);
        animationName = StyleManager_Style("animation-name", target);
        animationTimingFunction = StyleManager_Style("animation-timing-function", target);
        animationPlayState = StyleManager_Style("animation-playState", target);
        background = StyleManager_Style("background", target);
        backgroundAttachment = StyleManager_Style("background-attachment", target);
        backgroundColor = StyleManager_Style("background-color", target);
        backgroundImage = StyleManager_Style("background-image", target);
        backgroundPosition = StyleManager_Style("background-position", target);
        backgroundRepeat = StyleManager_Style("background-repeat", target);
        backgroundClip = StyleManager_Style("background-clip", target);
        backgroundOrigin = StyleManager_Style("background-origin", target);
        backgroundSize = StyleManager_Style("background-size", target);
        backfaceVisibility = StyleManager_Style("backface-visibility", target);
        border = StyleManager_Style("border", target);
        borderBottom = StyleManager_Style("border-bottom", target);
        borderBottomColor = StyleManager_Style("border-bottom-color", target);
        borderBottomLeftRadius = StyleManager_Style("border-bottom-left-radius", target);
        borderBottomRightRadius = StyleManager_Style("border-bottom-right-radius", target);
        borderBottomStyle = StyleManager_Style("border-bottom-style", target);
        borderBottomWidth = StyleManager_Style("border-bottom-width", target);
        borderCollapse = StyleManager_Style("border-collapse", target);
        borderColor = StyleManager_Style("border-color", target);
        borderImage = StyleManager_Style("border-image", target);
        borderImageOutset = StyleManager_Style("border-image-outset", target);
        borderImageRepeat = StyleManager_Style("border-image-repeat", target);
        borderImageSlice = StyleManager_Style("border-image-slice", target);
        borderImageSource = StyleManager_Style("border-image-source", target);
        borderImageWidth = StyleManager_Style("border-image-width", target);
        borderLeft = StyleManager_Style("border-left", target);
        borderLeftColor = StyleManager_Style("border-left-color", target);
        borderLeftStyle = StyleManager_Style("border-left-style", target);
        borderLeftWidth = StyleManager_Style("border-left-width", target);
        borderRadius = StyleManager_Style("border-radius", target);
        borderRight = StyleManager_Style("border-right", target);
        borderRightColor = StyleManager_Style("border-right-color", target);
        borderRightStyle = StyleManager_Style("border-right-style", target);
        borderRightWidth = StyleManager_Style("border-right-width", target);
        borderSpacing = StyleManager_Style("border-spacing", target);
        borderStyle = StyleManager_Style("border-style", target);
        borderTop = StyleManager_Style("border-top", target);
        borderTopColor = StyleManager_Style("border-top-color", target);
        borderTopLeftRadius = StyleManager_Style("border-top-left-radius", target);
        borderTopRightRadius = StyleManager_Style("border-top-right-radius", target);
        borderTopStyle = StyleManager_Style("border-top-style", target);
        borderTopWidth = StyleManager_Style("border-top-width", target);
        borderWidth = StyleManager_Style("border-width", target);
        bottom = StyleManager_Style("bottom", target);
        boxDecorationBreak = StyleManager_Style("box-decoration-break", target);
        boxShadow = StyleManager_Style("box-shadow", target);
        boxSizing = StyleManager_Style("box-sizing", target);
        captionSide = StyleManager_Style("caption-side", target);
        caretColor = StyleManager_Style("caret-color", target);
        clear = StyleManager_Style("clear", target);
        clip = StyleManager_Style("clip", target);
        color = StyleManager_Style("color", target);
        columnCount = StyleManager_Style("column-count", target);
        columnFill = StyleManager_Style("column-fill", target);
        columnGap = StyleManager_Style("column-gap", target);
        columnRule = StyleManager_Style("column-rule", target);
        columnRuleColor = StyleManager_Style("column-rulecolor", target);
        columnRuleStyle = StyleManager_Style("column-rulestyle", target);
        columnRuleWidth = StyleManager_Style("column-rulewidth", target);
        columns = StyleManager_Style("columns", target);
        columnSpan = StyleManager_Style("column-span", target);
        columnWidth = StyleManager_Style("column-width", target);
        content = StyleManager_Style("content", target);
        counterIncrement = StyleManager_Style("counter-increment", target);
        counterReset = StyleManager_Style("counter-reset", target);
        cursor = StyleManager_Style("cursor", target);
        direction = StyleManager_Style("direction", target);
        display = StyleManager_Style("display", target);
        emptyCells = StyleManager_Style("empty-cells", target);
        filter = StyleManager_Style("filter", target);
        flex = StyleManager_Style("flex", target);
        flexBasis = StyleManager_Style("flex-basis", target);
        flexDirection = StyleManager_Style("flex-direction", target);
        flexFlow = StyleManager_Style("flex-flow", target);
        flexGrow = StyleManager_Style("flex-grow", target);
        flexShrink = StyleManager_Style("flex-shrink", target);
        flexWrap = StyleManager_Style("flex-wrap", target);
        cssFloat = StyleManager_Style("css-float", target);
        font = StyleManager_Style("font", target);
        fontFamily = StyleManager_Style("font-family", target);
        fontSize = StyleManager_Style("font-size", target);
        fontStyle = StyleManager_Style("font-style", target);
        fontVariant = StyleManager_Style("font-variant", target);
        fontWeight = StyleManager_Style("font-weight", target);
        fontSizeAdjust = StyleManager_Style("font-sizeAdjust", target);
        fontStretch = StyleManager_Style("font-stretch", target);
        hangingPunctuation = StyleManager_Style("hanging-punctuation", target);
        height = StyleManager_Style("height", target);
        hyphens = StyleManager_Style("hyphens", target);
        icon = StyleManager_Style("icon", target);
        imageOrientation = StyleManager_Style("image-orientation", target);
        isolation = StyleManager_Style("isolation", target);
        justifyContent = StyleManager_Style("justify-content", target);
        left = StyleManager_Style("left", target);
        letterSpacing = StyleManager_Style("letter-spacing", target);
        lineHeight = StyleManager_Style("line-height", target);
        listStyle = StyleManager_Style("list-style", target);
        listStyleImage = StyleManager_Style("list-style-image", target);
        listStylePosition = StyleManager_Style("list-style-position", target);
        listStyleType = StyleManager_Style("list-style-type", target);
        margin = StyleManager_Style("margin", target);
        marginBottom = StyleManager_Style("margin-bottom", target);
        marginLeft = StyleManager_Style("margin-left", target);
        marginRight = StyleManager_Style("margin-right", target);
        marginTop = StyleManager_Style("margin-top", target);
        maxHeight = StyleManager_Style("max-height", target);
        maxWidth = StyleManager_Style("max-width", target);
        minHeight = StyleManager_Style("min-height", target);
        minWidth = StyleManager_Style("min-width", target);
        navDown = StyleManager_Style("nav-down", target);
        navIndex = StyleManager_Style("nav-index", target);
        navLeft = StyleManager_Style("nav-left", target);
        navRight = StyleManager_Style("nav-right", target);
        navUp = StyleManager_Style("nav-up", target);
        objectFit = StyleManager_Style("object-fit", target);
        objectPosition = StyleManager_Style("object-position", target);
        opacity = StyleManager_Style("opacity", target);
        order = StyleManager_Style("order", target);
        orphans = StyleManager_Style("orphans", target);
        outline = StyleManager_Style("outline", target);
        outlineColor = StyleManager_Style("outline-color", target);
        outlineOffset = StyleManager_Style("outline-offset", target);
        outlineStyle = StyleManager_Style("outline-style", target);
        outlineWidth = StyleManager_Style("outline-width", target);
        overflow = StyleManager_Style("overflow", target);
        overflowX = StyleManager_Style("overflow-x", target);
        overflowY = StyleManager_Style("overflow-y", target);
        padding = StyleManager_Style("padding", target);
        paddingBottom = StyleManager_Style("padding-bottom", target);
        paddingLeft = StyleManager_Style("padding-left", target);
        paddingRight = StyleManager_Style("padding-right", target);
        paddingTop = StyleManager_Style("padding-top", target);
        pageBreakAfter = StyleManager_Style("page-break-after", target);
        pageBreakBefore = StyleManager_Style("page-break-before", target);
        pageBreakInside = StyleManager_Style("page-break-inside", target);
        perspective = StyleManager_Style("perspective", target);
        perspectiveOrigin = StyleManager_Style("perspective-origin", target);
        position = StyleManager_Style("position", target);
        quotes = StyleManager_Style("quotes", target);
        resize = StyleManager_Style("resize", target);
        right = StyleManager_Style("right", target);
        scrollBehavior = StyleManager_Style("scroll-behavior", target);
        tableLayout = StyleManager_Style("table-layout", target);
        tabSize = StyleManager_Style("tab-size", target);
        textAlign = StyleManager_Style("text-align", target);
        textAlignLast = StyleManager_Style("text-align-last", target);
        textDecoration = StyleManager_Style("text-decoration", target);
        textDecorationColor = StyleManager_Style("text-decoration-color", target);
        textDecorationLine = StyleManager_Style("text-decoration-line", target);
        textDecorationStyle = StyleManager_Style("text-decoration-style", target);
        textIndent = StyleManager_Style("text-indent", target);
        textJustify = StyleManager_Style("text-justify", target);
        textOverflow = StyleManager_Style("text-overflow", target);
        textShadow = StyleManager_Style("text-shadow", target);
        textTransform = StyleManager_Style("text-transform", target);
        top = StyleManager_Style("top", target);
        transform = StyleManager_Style("transform", target);
        transformOrigin = StyleManager_Style("transform-origin", target);
        transformStyle = StyleManager_Style("transform-style", target);
        transition = StyleManager_Style("transition", target);
        transitionProperty = StyleManager_Style("transition-property", target);
        transitionDuration = StyleManager_Style("transition-duration", target);
        transitionTimingFunction = StyleManager_Style("transition-timing-function", target);
        transitionDelay = StyleManager_Style("transition-delay", target);
        unicodeBidi = StyleManager_Style("unicode-bidi", target);
        userSelect = StyleManager_Style("user-select", target);
        verticalAlign = StyleManager_Style("vertical-align", target);
        visibility = StyleManager_Style("visibility", target);
        whiteSpace = StyleManager_Style("whiteSpace", target);
        width = StyleManager_Style("width", target);
        wordBreak = StyleManager_Style("word-break", target);
        wordSpacing = StyleManager_Style("word-spacing", target);
        wordWrap = StyleManager_Style("word-wrap", target);
        widows = StyleManager_Style("widows", target);
        zIndex = StyleManager_Style("z-index", target);
        this->target = target;
    }
    
    StyleManager& StyleManager::operator=(String v){
        target->SetAttribute("style", v);
        return *this;
    }
    
    
}

#pragma region Element Base Properties
void HTMLBaseElement::appendChild(Rml::Element* child, bool dom_element)
{
	// _a_E_D::elementMap.emplace(child, _a_E_D::elementMap.at(child));
	auto ElementData = Rml::_a_E_D::elementMap.at(child);
	target->AppendChild(std::move(ElementData->ownedElement));
	delete ElementData;
	Rml::_a_E_D::elementMap.erase(child);
}

void HTMLBaseElement::setProperty(const Rml::String& name, const Rml::String& value) {
    target->SetProperty(name, value);
};
void HTMLBaseElement::setProperty(const Rml::String& name, const int& value) {
    target->SetProperty(name, std::to_string(value));
};
void HTMLBaseElement::removeProperty(const Rml::String& name){
    target->RemoveProperty(name);
};
template <typename T>
void HTMLBaseElement::setAttribute(const Rml::String& name, const T& value){
    target->SetAttribute(name,value);
};
Rml::Variant* HTMLBaseElement::getAttribute(const Rml::String& name) {
    return target->GetAttribute(name);
};
const Rml::Variant* HTMLBaseElement::getAttribute(const Rml::String& name) const {
    return target->GetAttribute(name);
};
// template <typename T>
// T HTMLBaseElement::getAttribute(const Rml::String& name, const T& default_value) const{
//     return target->getAttribute(name, default_value);
// };
bool HTMLBaseElement::hasAttribute(const Rml::String& name) const {
    return target->HasAttribute(name);
};
void HTMLBaseElement::removeAttribute(const Rml::String& name){
    target->RemoveAttribute(name);
};
DOMRect HTMLBaseElement::getBoundingClientRect(){
    float x = target->GetClientLeft();
    float y = target->GetClientTop();
    float width = target->GetClientWidth();
    float height = target->GetClientHeight();
    float top = y;
    float right = x+width;
    float bottom = y + height;
    float left = x;
    
    return DOMRect(x,y,width,height,top,right,bottom,left);
}
void HTMLBaseElement::setInnerHTML(const Rml::String& html) {
    target->SetInnerRML(html);
};

Rml::String HTMLBaseElement::getInnerHTML(){
    return target->GetInnerRML();
}
int addEventListener(const Rml::String& event, std::function<void(Rml::MouseEvent)>&& listener);
int addEventListener(const Rml::String& event, std::function<void(Rml::MouseEvent)>* listener);
void removeEventListener(const Rml::String& event, int eventId){
    
}

Rml::Element* HTMLBaseElement::getElementById(const Rml::String& id){
    return target->GetElementById(id);
}
Rml::Element* HTMLBaseElement::querySelector(const Rml::String& selector){
    return std::move(target->QuerySelector(selector));
}