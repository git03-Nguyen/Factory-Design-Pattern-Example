#include "FactoryMethod.h"

GUI* ButtonFactory::create() const {
    return new (std::nothrow) Button;
}

GUI* DialogFactory::create() const {
    return new (std::nothrow) Dialog;
}

GUI* ScrollBarFactory::create() const {
    return new (std::nothrow) ScrollBar;
}
