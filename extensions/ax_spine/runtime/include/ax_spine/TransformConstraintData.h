/******************************************************************************
 * Spine Runtimes License Agreement
 * Last updated May 1, 2019. Replaces all prior versions.
 *
 * Copyright (c) 2013-2019, Esoteric Software LLC
 *
 * Integration of the Spine Runtimes into software or otherwise creating
 * derivative works of the Spine Runtimes is permitted under the terms and
 * conditions of Section 2 of the Spine Editor License Agreement:
 * http://esotericsoftware.com/spine-editor-license
 *
 * Otherwise, it is permitted to integrate the Spine Runtimes into software
 * or otherwise create derivative works of the Spine Runtimes (collectively,
 * "Products"), provided that each user of the Products must obtain their own
 * Spine Editor license and redistribution of the Products in any form must
 * include this license and copyright notice.
 *
 * THIS SOFTWARE IS PROVIDED BY ESOTERIC SOFTWARE LLC "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN
 * NO EVENT SHALL ESOTERIC SOFTWARE LLC BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES, BUSINESS
 * INTERRUPTION, OR LOSS OF USE, DATA, OR PROFITS) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *****************************************************************************/

#ifndef Spine_TransformConstraintData_h
#define Spine_TransformConstraintData_h

#include <ax_spine/Vector.h>
#include <ax_spine/SpineObject.h>
#include <ax_spine/SpineString.h>

namespace ax_spine {
    class BoneData;
    
    class SP_API TransformConstraintData : public SpineObject {
        friend class SkeletonBinary;
        friend class SkeletonJson;
        
        friend class TransformConstraint;
        friend class Skeleton;
        friend class TransformConstraintTimeline;
        
    public:
        explicit TransformConstraintData(const String& name);

        const String& getName();
        int getOrder();
        Vector<BoneData*>& getBones();
        BoneData* getTarget();
        float getRotateMix();
        float getTranslateMix();
        float getScaleMix();
        float getShearMix();
        
        float getOffsetRotation();
        float getOffsetX();
        float getOffsetY();
        float getOffsetScaleX();
        float getOffsetScaleY();
        float getOffsetShearY();
        
        bool isRelative();
        bool isLocal();
        
    private:
        const String _name;
        int _order;
        Vector<BoneData*> _bones;
        BoneData* _target;
        float _rotateMix, _translateMix, _scaleMix, _shearMix;
        float _offsetRotation, _offsetX, _offsetY, _offsetScaleX, _offsetScaleY, _offsetShearY;
        bool _relative, _local;
    };
}

#endif /* Spine_TransformConstraintData_h */
