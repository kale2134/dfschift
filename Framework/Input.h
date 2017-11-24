#pragma once

struct Input {
    enum Type {Keyboard, Mouse};
    Type type;

    char key;
};
