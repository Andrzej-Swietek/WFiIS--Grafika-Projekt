#include "Shape.hpp"

Shape::Shape(): stroke(1), outline("black"), fill("transparent") {}

Shape::Shape(int stroke, std::string outline, std::string fill)
: stroke(stroke), outline(outline), fill(fill)
{}

int Shape::getStroke() const {
    return stroke;
}

std::string Shape::getOutline() const {
    return outline;
}

std::string Shape::getFill() const {
    return fill;
}

void Shape::setStroke(int stroke) {
    this->stroke = stroke;
}

void Shape::setOutline(const std::string& outline) {
    this->outline = outline;
}

void Shape::setFill(const std::string& fill) {
    this->fill = fill;
}

ShapeType Shape::getShapeType() const {
    return shape_type;
}

void Shape::setShapeType(ShapeType shape_type) {
    this->shape_type = shape_type;
}

std::string Shape::shapeTypeToString(ShapeType shape_type) {
    switch (shape_type) {
        case ShapeType::CIRCLE:
            return "CIRCLE";
        case ShapeType::CURVE:
            return "CURVE";
        case ShapeType::LINE:
            return "LINE";
        case ShapeType::POLYGON:
            return "POLYGON";
        default:
            return "UNKNOWN";
    }
}