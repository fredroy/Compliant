/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, version 1.0 RC 1        *
*                (c) 2006-2011 MGH, INRIA, USTL, UJF, CNRS                    *
*                                                                             *
* This library is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This library is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this library; if not, write to the Free Software Foundation,     *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.          *
*******************************************************************************
*                               SOFA :: Plugins                               *
*                                                                             *
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
#include "initCompliant.h"
#include <plugins/Compliant/CompliantAttachPerformer.h>
#include <sofa/gui/OperationFactory.h>
#include <sofa/gui/MouseOperations.h>

namespace sofa
{


//simulation::Node::SPtr compliantAttachNode( simulation::Node* pickedNode, simulation::Node* mouseNode ){

//}



namespace component
{

//Here are just several convenient functions to help user to know what contains the plugin

extern "C" {
    SOFA_Compliant_API void initExternalModule();
    SOFA_Compliant_API const char* getModuleName();
    SOFA_Compliant_API const char* getModuleVersion();
    SOFA_Compliant_API const char* getModuleLicense();
    SOFA_Compliant_API const char* getModuleDescription();
    SOFA_Compliant_API const char* getModuleComponentList();
}

void initExternalModule()
{
    static bool first = true;
    if (first)
    {
        first = false;
    }
    gui::RegisterOperation("CompliantAttach").add< gui::CompliantAttachOperation >();
}

const char* getModuleName()
{
    return "Compliant";
}

const char* getModuleVersion()
{
    return "0.2";
}

const char* getModuleLicense()
{
    return "LGPL";
}


const char* getModuleDescription()
{
    return "Simulation of deformable object using a formulation similar to the KKT system for hard constraints, regularized using a compliance matrix";
}

const char* getModuleComponentList()
{
//    return "MyMappingPendulumInPlane, MyBehaviorModel, MyProjectiveConstraintSet";
    return "";
}



}

}


//SOFA_LINK_CLASS(MyMappingPendulumInPlane)
//SOFA_LINK_CLASS(MyBehaviorModel)
//SOFA_LINK_CLASS(MyProjectiveConstraintSet)

