#include "data_desk.h"

DATA_DESK_FUNC void
DataDeskCustomInitCallback(void) {}

DATA_DESK_FUNC void
DataDeskCustomFileCallback(DataDeskASTNode *root, char *filename) {}

DATA_DESK_FUNC void
DataDeskCustomConstantCallback(DataDeskConstant constant_info, char *filename) {}

DATA_DESK_FUNC void
DataDeskCustomStructCallback(DataDeskStruct struct_info, char *filename) {}

DATA_DESK_FUNC void
DataDeskCustomDeclarationCallback(DataDeskDeclaration declaration_info, char *filename) {}

DATA_DESK_FUNC void
DataDeskCustomCleanUpCallback(void) {}