//
//  ofxAsssimpTexture.cpp
//
//  Created by Lukasz Karluk on 27/03/13.
//
//

#include "ofxAssimpTexture.h"
#include "ofConstants.h"

ofxAssimpTexture::ofxAssimpTexture() {
    texturePath = "";
}

ofxAssimpTexture::ofxAssimpTexture(ofTexture texture, std::string texturePath) {
    this->texture = texture;
    this->texturePath = texturePath;
}

ofTexture & ofxAssimpTexture::getTextureRef() {
    return texture;
}

std::string ofxAssimpTexture::getTexturePath() {
    return texturePath;
}

bool ofxAssimpTexture::hasTexture() {
    return texture.isAllocated();
}
