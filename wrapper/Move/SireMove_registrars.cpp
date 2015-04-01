//WARNING - AUTOGENERATED FILE - CONTENTS WILL BE OVERWRITTEN!
#include <Python.h>

#include "SireMove_registrars.h"

#include "moleculardynamics.h"
#include "suprasimpacket.h"
#include "titrator.h"
#include "suprasubmove.h"
#include "hybridmc.h"
#include "mtsmc.h"
#include "integrator.h"
#include "suprasubsystem.h"
#include "zmatrix.h"
#include "openmmfrenergydt.h"
#include "zmatmove.h"
#include "weightedmoves.h"
#include "supramove.h"
#include "replicas.h"
#include "replica.h"
#include "prefsampler.h"
#include "suprasystem.h"
#include "openmmmdintegrator.h"
#include "moves.h"
#include "velocitygenerator.h"
#include "internalmovesingle.h"
#include "openmmfrenergyst.h"
#include "supramoves.h"
#include "rigidbodymc.h"
#include "titrationmove.h"
#include "flexibility.h"
#include "move.h"
#include "suprasubmoves.h"
#include "volumechanger.h"
#include "repexmove.h"
#include "openmmintegrator.h"
#include "volumemove.h"
#include "uniformsampler.h"
#include "internalmove.h"
#include "rbworkspace.h"
#include "molinserter.h"
#include "simpacket.h"
#include "integratorworkspace.h"
#include "suprasubsimpacket.h"
#include "openmmacceleratedmdintegrator.h"
#include "ensemble.h"
#include "velocityverlet.h"
#include "getpoint.h"
#include "moldeleter.h"
#include "simstore.h"
#include "dlmrigidbody.h"

#include "Helpers/objectregistry.hpp"

void register_SireMove_objects()
{

    ObjectRegistry::registerConverterFor< SireMove::MolecularDynamics >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSimPacket >();
    ObjectRegistry::registerConverterFor< SireMove::Titrator >();
    ObjectRegistry::registerConverterFor< SireMove::NullSupraSubMove >();
    ObjectRegistry::registerConverterFor< SireMove::HybridMC >();
    ObjectRegistry::registerConverterFor< SireMove::HMCGenerator >();
    ObjectRegistry::registerConverterFor< SireMove::MTSMC >();
    ObjectRegistry::registerConverterFor< SireMove::NullIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSubSystem >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrix >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrixLine >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrixCoords >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatrixCoordsLine >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyDT >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyDT >();
    ObjectRegistry::registerConverterFor< SireMove::ZMatMove >();
    ObjectRegistry::registerConverterFor< SireMove::WeightedMoves >();
    ObjectRegistry::registerConverterFor< SireMove::NullSupraMove >();
    ObjectRegistry::registerConverterFor< SireMove::Replicas >();
    ObjectRegistry::registerConverterFor< SireMove::Replica >();
    ObjectRegistry::registerConverterFor< SireMove::PrefSampler >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSystem >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMMDIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMMDIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::SameMoves >();
    ObjectRegistry::registerConverterFor< SireMove::NullVelocityGenerator >();
    ObjectRegistry::registerConverterFor< SireMove::VelocitiesFromProperty >();
    ObjectRegistry::registerConverterFor< SireMove::MaxwellBoltzmann >();
    ObjectRegistry::registerConverterFor< SireMove::InternalMoveSingle >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyST >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMFrEnergyST >();
    ObjectRegistry::registerConverterFor< SireMove::SameSupraMoves >();
    ObjectRegistry::registerConverterFor< SireMove::RigidBodyMC >();
    ObjectRegistry::registerConverterFor< SireMove::TitrationMove >();
    ObjectRegistry::registerConverterFor< SireMove::DofID >();
    ObjectRegistry::registerConverterFor< SireMove::Flexibility >();
    ObjectRegistry::registerConverterFor< SireMove::NullMove >();
    ObjectRegistry::registerConverterFor< SireMove::SameSupraSubMoves >();
    ObjectRegistry::registerConverterFor< SireMove::NullVolumeChanger >();
    ObjectRegistry::registerConverterFor< SireMove::ScaleVolumeFromCenter >();
    ObjectRegistry::registerConverterFor< SireMove::RepExMove >();
    ObjectRegistry::registerConverterFor< SireMove::RepExSubMove >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::VolumeMove >();
    ObjectRegistry::registerConverterFor< SireMove::UniformSampler >();
    ObjectRegistry::registerConverterFor< SireMove::InternalMove >();
    ObjectRegistry::registerConverterFor< SireMove::RBWorkspace >();
    ObjectRegistry::registerConverterFor< SireMove::NullInserter >();
    ObjectRegistry::registerConverterFor< SireMove::UniformInserter >();
    ObjectRegistry::registerConverterFor< SireMove::SimPacket >();
    ObjectRegistry::registerConverterFor< SireMove::NullIntegratorWorkspace >();
    ObjectRegistry::registerConverterFor< SireMove::AtomicVelocityWorkspace >();
    ObjectRegistry::registerConverterFor< SireMove::SupraSubSimPacket >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMAMDIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::OpenMMAMDIntegrator >();
    ObjectRegistry::registerConverterFor< SireMove::Ensemble >();
    ObjectRegistry::registerConverterFor< SireMove::VelocityVerlet >();
    ObjectRegistry::registerConverterFor< SireMove::NullGetPoint >();
    ObjectRegistry::registerConverterFor< SireMove::GetCOMPoint >();
    ObjectRegistry::registerConverterFor< SireMove::GetCOGPoint >();
    ObjectRegistry::registerConverterFor< SireMove::NullDeleter >();
    ObjectRegistry::registerConverterFor< SireMove::SpecifiedGroupsDeleter >();
    ObjectRegistry::registerConverterFor< SireMove::SystemWideDeleter >();
    ObjectRegistry::registerConverterFor< SireMove::SimStore >();
    ObjectRegistry::registerConverterFor< SireMove::DLMRigidBody >();

}
