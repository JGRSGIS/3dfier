//
//  Building.h
//
//  Created by Hugo Ledoux on 19/10/15.
//  Copyright © 2015 Hugo Ledoux. All rights reserved.
//

#ifndef Building_h
#define Building_h

#include "TopoFeature.h"



class Building : public Block
{
public:
    Building (Polygon2* p, std::string pid, std::string lifttype);
};


#endif /* Building_h */
