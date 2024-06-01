#include "ui.h"
#include "selection_box.h"

Ui::Ui() { selectbox = SelectionBox(); }

Ui::~Ui() {}

void Ui::render() { selectbox.handle(); }
