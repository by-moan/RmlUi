class DOMRect{
    public:
	float x = 0;
	float y = 0;
	float width = 0;
	float height = 0;
	float top = 0;
	float right = 0;
	float bottom = 0;
	float left = 0;

    DOMRect() = default;

    DOMRect(float x,float y,float width,float height,float top,float right,float bottom,float left){
        this->x = x;
        this->y = y;
        this->width = width;
        this->height = height;
        this->top = top;
        this->right = right;
        this->bottom = bottom;
        this->left = left;
    }
};