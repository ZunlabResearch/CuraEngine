/** Copyright (C) 2013 David Braam - Released under terms of the AGPLv3 License */
#ifndef SKIRT_BRIM_H
#define SKIRT_BRIM_H

#include "sliceDataStorage.h"

namespace cura 
{

/*!
 * Generate skirt or brim (depending on parameters).
 * 
 * When \p distance > 0 and \p count == 1 a skirt is generated, which has
 * slightly different configuration. Otherwise, a brim is generated.
 * 
 * \param storage Storage containing the parts at the first layer.
 * \param distance The distance of the first outset from the parts at the first
 * layer.
 * \param count Number of outsets / brim lines.
 * \param minLength The minimum length the skirt should have (enforced by taking
 * more outsets).
 */
void generateSkirtBrim(SliceDataStorage& storage, int distance, unsigned int count, int minLength);

}//namespace cura

#endif //SKIRT_BRIM_H
