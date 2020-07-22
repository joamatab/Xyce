
// -*-c++-*-
//-------------------------------------------------------------------------
//   Copyright 2002-2020 National Technology & Engineering Solutions of
//   Sandia, LLC (NTESS).  Under the terms of Contract DE-NA0003525 with
//   NTESS, the U.S. Government retains certain rights in this software.
//
//   This file is part of the Xyce(TM) Parallel Electrical Simulator.
//
//   Xyce(TM) is free software: you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation, either version 3 of the License, or
//   (at your option) any later version.
//
//   Xyce(TM) is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.
//
//   You should have received a copy of the GNU General Public License
//   along with Xyce(TM).
//   If not, see <http://www.gnu.org/licenses/>.
//-------------------------------------------------------------------------

//-----------------------------------------------------------------------------
//
// Purpose        :
//
// Special Notes  : Generated from verilog file juncap200.va with ADMS
//                  interface for Xyce 7.2.0
//                  DO NOT EDIT THIS FILE DIRECTLY!  It may be overwritten!
//
// Creator        : admsXml-2.3.6
//
// Creation Date  : Wed, 22 Jul 2020 11:54:17
//
//-----------------------------------------------------------------------------
#ifndef Xyce_N_DEV_ADMSJUNCAP200_h
#define Xyce_N_DEV_ADMSJUNCAP200_h


#include <N_DEV_Configuration.h>
#include <N_DEV_Const.h>
#include <N_DEV_DeviceBlock.h>
#include <N_DEV_DeviceInstance.h>
#include <N_DEV_DeviceModel.h>
#include <N_DEV_Diode.h>


namespace Xyce {
namespace Device {
namespace ADMSJUNCAP200 {

class Model;
class Instance;
class InstanceSensitivity;

#ifdef Xyce_ADMS_SENSITIVITIES
//-----------------------------------------------------------------------------
// Class         : InstanceSensitivity
//
// Purpose       : This class is a functor for sensitivity
//
// Special Notes :
// Creator       :
// Creation Date :
//-----------------------------------------------------------------------------
class InstanceSensitivity : public baseSensitivity
{
public:
InstanceSensitivity() :
baseSensitivity() {};

virtual ~InstanceSensitivity() {};

virtual void operator()(
const ParameterBase &entity,
const std::string &param,
std::vector<double> & dfdp,
std::vector<double> & dqdp,
std::vector<double> & dbdp,
std::vector<int> & Findices,
std::vector<int> & Qindices,
std::vector<int> & Bindices
) const ;
};

static InstanceSensitivity instSens;


//-----------------------------------------------------------------------------
// Class         : ModelSensitivity
//
// Purpose       : This class is a functor for sensitivity
//
// Special Notes :
// Creator       :
// Creation Date :
//-----------------------------------------------------------------------------
class ModelSensitivity : public baseSensitivity
{
public:
ModelSensitivity() :
baseSensitivity() {};

virtual ~ModelSensitivity() {};

virtual void operator()(
const ParameterBase &entity,
const std::string &param,
std::vector<double> & dfdp,
std::vector<double> & dqdp,
std::vector<double> & dbdp,
std::vector<int> & Findices,
std::vector<int> & Qindices,
std::vector<int> & Bindices
) const ;
};

static ModelSensitivity modSens;
#endif // Xyce_ADMS_SENSITIVITIES

// general purpose free functions
// thermal voltage at kelvin temperature temp)
template <typename T> static inline T adms_vt(const T temp) {return(CONSTKoverQ*temp);};

// Figure out how to template this shiznit!
//-----------------------------------------------------------------------------


template<typename Tin>
static Tin adms_ternary_op(const bool cond, const Tin &ifTrue, const Tin &ifFalse)
{
if (cond)
return ifTrue;
else
return ifFalse;
}

template<typename Tin>
static Tin adms_ternary_op(const bool cond, const Tin &ifTrue, const double &ifFalse)
{
if (cond)
return ifTrue;
else
return Tin(ifFalse);
}

template<typename Tin>
static Tin adms_ternary_op(const bool cond, const double &ifTrue, const Tin &ifFalse)
{
if (cond)
return Tin(ifTrue);
else
return ifFalse;
}




#ifdef Xyce_ADMS_SENSITIVITIES
//-----------------------------------------------------------------------------
// "structs" to hold instance and model param/variable copies
//-----------------------------------------------------------------------------
class instanceSensStruct
{
public:
// instance parameters
// reals
double instancePar_AB;
double d_instancePar_AB_dX;
bool instancePar_given_AB;
double instancePar_LS;
double d_instancePar_LS_dX;
bool instancePar_given_LS;
double instancePar_LG;
double d_instancePar_LG_dX;
bool instancePar_given_LG;
double instancePar_MULT;
double d_instancePar_MULT_dX;
bool instancePar_given_MULT;
// instance variables
// reals
double instanceVar_MULT_i;
double d_instanceVar_MULT_i_dX;
double instanceVar_AB_i;
double d_instanceVar_AB_i_dX;
double instanceVar_LS_i;
double d_instanceVar_LS_i_dX;
double instanceVar_LG_i;
double d_instanceVar_LG_i_dX;
double instanceVar_zflagbot;
double instanceVar_zflagsti;
double instanceVar_zflaggat;
double instanceVar_VMAX;
double d_instanceVar_VMAX_dX;
double instanceVar_exp_VMAX_over_phitd;
double d_instanceVar_exp_VMAX_over_phitd_dX;
double instanceVar_vbimin;
double d_instanceVar_vbimin_dX;
double instanceVar_vch;
double d_instanceVar_vch_dX;
double instanceVar_vfmin;
double d_instanceVar_vfmin_dX;
double instanceVar_vbbtlim;
double d_instanceVar_vbbtlim_dX;
double instanceVar_xhighf1;
double d_instanceVar_xhighf1_dX;
double instanceVar_expxhf1;
double d_instanceVar_expxhf1_dX;
double instanceVar_xhighf2;
double d_instanceVar_xhighf2_dX;
double instanceVar_expxhf2;
double d_instanceVar_expxhf2_dX;
double instanceVar_xhighr;
double d_instanceVar_xhighr_dX;
double instanceVar_expxhr;
double d_instanceVar_expxhr_dX;
double instanceVar_ISATFOR1;
double d_instanceVar_ISATFOR1_dX;
double instanceVar_MFOR1;
double instanceVar_ISATFOR2;
double d_instanceVar_ISATFOR2_dX;
double instanceVar_MFOR2;
double d_instanceVar_MFOR2_dX;
double instanceVar_ISATREV;
double d_instanceVar_ISATREV_dX;
double instanceVar_MREV;
double d_instanceVar_MREV_dX;
double instanceVar_m0flag;
};

class modelSensStruct
{
public:
// model parameters
// reals
double modelPar_DTA;
double d_modelPar_DTA_dX;
bool modelPar_given_DTA;
double modelPar_IMAX;
double d_modelPar_IMAX_dX;
bool modelPar_given_IMAX;
double modelPar_TRJ;
double d_modelPar_TRJ_dX;
bool modelPar_given_TRJ;
double modelPar_FREV;
double d_modelPar_FREV_dX;
bool modelPar_given_FREV;
double modelPar_CJORBOT;
double d_modelPar_CJORBOT_dX;
bool modelPar_given_CJORBOT;
double modelPar_CJORSTI;
double d_modelPar_CJORSTI_dX;
bool modelPar_given_CJORSTI;
double modelPar_CJORGAT;
double d_modelPar_CJORGAT_dX;
bool modelPar_given_CJORGAT;
double modelPar_VBIRBOT;
double d_modelPar_VBIRBOT_dX;
bool modelPar_given_VBIRBOT;
double modelPar_VBIRSTI;
double d_modelPar_VBIRSTI_dX;
bool modelPar_given_VBIRSTI;
double modelPar_VBIRGAT;
double d_modelPar_VBIRGAT_dX;
bool modelPar_given_VBIRGAT;
double modelPar_PBOT;
double d_modelPar_PBOT_dX;
bool modelPar_given_PBOT;
double modelPar_PSTI;
double d_modelPar_PSTI_dX;
bool modelPar_given_PSTI;
double modelPar_PGAT;
double d_modelPar_PGAT_dX;
bool modelPar_given_PGAT;
double modelPar_PHIGBOT;
double d_modelPar_PHIGBOT_dX;
bool modelPar_given_PHIGBOT;
double modelPar_PHIGSTI;
double d_modelPar_PHIGSTI_dX;
bool modelPar_given_PHIGSTI;
double modelPar_PHIGGAT;
double d_modelPar_PHIGGAT_dX;
bool modelPar_given_PHIGGAT;
double modelPar_IDSATRBOT;
double d_modelPar_IDSATRBOT_dX;
bool modelPar_given_IDSATRBOT;
double modelPar_IDSATRSTI;
double d_modelPar_IDSATRSTI_dX;
bool modelPar_given_IDSATRSTI;
double modelPar_IDSATRGAT;
double d_modelPar_IDSATRGAT_dX;
bool modelPar_given_IDSATRGAT;
double modelPar_CSRHBOT;
double d_modelPar_CSRHBOT_dX;
bool modelPar_given_CSRHBOT;
double modelPar_CSRHSTI;
double d_modelPar_CSRHSTI_dX;
bool modelPar_given_CSRHSTI;
double modelPar_CSRHGAT;
double d_modelPar_CSRHGAT_dX;
bool modelPar_given_CSRHGAT;
double modelPar_XJUNSTI;
double d_modelPar_XJUNSTI_dX;
bool modelPar_given_XJUNSTI;
double modelPar_XJUNGAT;
double d_modelPar_XJUNGAT_dX;
bool modelPar_given_XJUNGAT;
double modelPar_CTATBOT;
double d_modelPar_CTATBOT_dX;
bool modelPar_given_CTATBOT;
double modelPar_CTATSTI;
double d_modelPar_CTATSTI_dX;
bool modelPar_given_CTATSTI;
double modelPar_CTATGAT;
double d_modelPar_CTATGAT_dX;
bool modelPar_given_CTATGAT;
double modelPar_MEFFTATBOT;
double d_modelPar_MEFFTATBOT_dX;
bool modelPar_given_MEFFTATBOT;
double modelPar_MEFFTATSTI;
double d_modelPar_MEFFTATSTI_dX;
bool modelPar_given_MEFFTATSTI;
double modelPar_MEFFTATGAT;
double d_modelPar_MEFFTATGAT_dX;
bool modelPar_given_MEFFTATGAT;
double modelPar_CBBTBOT;
double d_modelPar_CBBTBOT_dX;
bool modelPar_given_CBBTBOT;
double modelPar_CBBTSTI;
double d_modelPar_CBBTSTI_dX;
bool modelPar_given_CBBTSTI;
double modelPar_CBBTGAT;
double d_modelPar_CBBTGAT_dX;
bool modelPar_given_CBBTGAT;
double modelPar_FBBTRBOT;
double d_modelPar_FBBTRBOT_dX;
bool modelPar_given_FBBTRBOT;
double modelPar_FBBTRSTI;
double d_modelPar_FBBTRSTI_dX;
bool modelPar_given_FBBTRSTI;
double modelPar_FBBTRGAT;
double d_modelPar_FBBTRGAT_dX;
bool modelPar_given_FBBTRGAT;
double modelPar_STFBBTBOT;
double d_modelPar_STFBBTBOT_dX;
bool modelPar_given_STFBBTBOT;
double modelPar_STFBBTSTI;
double d_modelPar_STFBBTSTI_dX;
bool modelPar_given_STFBBTSTI;
double modelPar_STFBBTGAT;
double d_modelPar_STFBBTGAT_dX;
bool modelPar_given_STFBBTGAT;
double modelPar_VBRBOT;
double d_modelPar_VBRBOT_dX;
bool modelPar_given_VBRBOT;
double modelPar_VBRSTI;
double d_modelPar_VBRSTI_dX;
bool modelPar_given_VBRSTI;
double modelPar_VBRGAT;
double d_modelPar_VBRGAT_dX;
bool modelPar_given_VBRGAT;
double modelPar_PBRBOT;
double d_modelPar_PBRBOT_dX;
bool modelPar_given_PBRBOT;
double modelPar_PBRSTI;
double d_modelPar_PBRSTI_dX;
bool modelPar_given_PBRSTI;
double modelPar_PBRGAT;
double d_modelPar_PBRGAT_dX;
bool modelPar_given_PBRGAT;
double modelPar_SWJUNEXP;
double d_modelPar_SWJUNEXP_dX;
bool modelPar_given_SWJUNEXP;
double modelPar_VJUNREF;
double d_modelPar_VJUNREF_dX;
bool modelPar_given_VJUNREF;
double modelPar_FJUNQ;
double d_modelPar_FJUNQ_dX;
bool modelPar_given_FJUNQ;
// non-reals (including hidden)
int modelPar_LEVEL;
bool modelPar_given_LEVEL;
int modelPar_TYPE;
bool modelPar_given_TYPE;
// model variables
// reals
double modelVar_IMAX_i;
double d_modelVar_IMAX_i_dX;double modelVar_VBIRBOT_i;
double d_modelVar_VBIRBOT_i_dX;double modelVar_VBIRSTI_i;
double d_modelVar_VBIRSTI_i_dX;double modelVar_VBIRGAT_i;
double d_modelVar_VBIRGAT_i_dX;double modelVar_PBOT_i;
double d_modelVar_PBOT_i_dX;double modelVar_PSTI_i;
double d_modelVar_PSTI_i_dX;double modelVar_PGAT_i;
double d_modelVar_PGAT_i_dX;double modelVar_CSRHBOT_i;
double d_modelVar_CSRHBOT_i_dX;double modelVar_CSRHSTI_i;
double d_modelVar_CSRHSTI_i_dX;double modelVar_CSRHGAT_i;
double d_modelVar_CSRHGAT_i_dX;double modelVar_CTATBOT_i;
double d_modelVar_CTATBOT_i_dX;double modelVar_CTATSTI_i;
double d_modelVar_CTATSTI_i_dX;double modelVar_CTATGAT_i;
double d_modelVar_CTATGAT_i_dX;double modelVar_CBBTBOT_i;
double d_modelVar_CBBTBOT_i_dX;double modelVar_CBBTSTI_i;
double d_modelVar_CBBTSTI_i_dX;double modelVar_CBBTGAT_i;
double d_modelVar_CBBTGAT_i_dX;double modelVar_VBRBOT_i;
double d_modelVar_VBRBOT_i_dX;double modelVar_VBRSTI_i;
double d_modelVar_VBRSTI_i_dX;double modelVar_VBRGAT_i;
double d_modelVar_VBRGAT_i_dX;double modelVar_PBRBOT_i;
double d_modelVar_PBRBOT_i_dX;double modelVar_PBRSTI_i;
double d_modelVar_PBRSTI_i_dX;double modelVar_PBRGAT_i;
double d_modelVar_PBRGAT_i_dX;double modelVar_SWJUNEXP_i;
double modelVar_VJUNREF_i;
double d_modelVar_VJUNREF_i_dX;double modelVar_FJUNQ_i;
double d_modelVar_FJUNQ_i_dX;double modelVar_phitr;
double d_modelVar_phitr_dX;double modelVar_phitd;
double d_modelVar_phitd_dX;double modelVar_phitdinv;
double d_modelVar_phitdinv_dX;double modelVar_perfc;
double modelVar_berfc;
double modelVar_cerfc;
double modelVar_ftdbot;
double d_modelVar_ftdbot_dX;double modelVar_ftdsti;
double d_modelVar_ftdsti_dX;double modelVar_ftdgat;
double d_modelVar_ftdgat_dX;double modelVar_idsatbot;
double d_modelVar_idsatbot_dX;double modelVar_idsatsti;
double d_modelVar_idsatsti_dX;double modelVar_idsatgat;
double d_modelVar_idsatgat_dX;double modelVar_vbibot;
double d_modelVar_vbibot_dX;double modelVar_vbisti;
double d_modelVar_vbisti_dX;double modelVar_vbigat;
double d_modelVar_vbigat_dX;double modelVar_vbiinvbot;
double d_modelVar_vbiinvbot_dX;double modelVar_vbiinvsti;
double d_modelVar_vbiinvsti_dX;double modelVar_vbiinvgat;
double d_modelVar_vbiinvgat_dX;double modelVar_one_minus_PBOT;
double d_modelVar_one_minus_PBOT_dX;double modelVar_one_minus_PSTI;
double d_modelVar_one_minus_PSTI_dX;double modelVar_one_minus_PGAT;
double d_modelVar_one_minus_PGAT_dX;double modelVar_one_over_one_minus_PBOT;
double d_modelVar_one_over_one_minus_PBOT_dX;double modelVar_one_over_one_minus_PSTI;
double d_modelVar_one_over_one_minus_PSTI_dX;double modelVar_one_over_one_minus_PGAT;
double d_modelVar_one_over_one_minus_PGAT_dX;double modelVar_cjobot;
double d_modelVar_cjobot_dX;double modelVar_cjosti;
double d_modelVar_cjosti_dX;double modelVar_cjogat;
double d_modelVar_cjogat_dX;double modelVar_qprefbot;
double d_modelVar_qprefbot_dX;double modelVar_qprefsti;
double d_modelVar_qprefsti_dX;double modelVar_qprefgat;
double d_modelVar_qprefgat_dX;double modelVar_qpref2bot;
double d_modelVar_qpref2bot_dX;double modelVar_qpref2sti;
double d_modelVar_qpref2sti_dX;double modelVar_qpref2gat;
double d_modelVar_qpref2gat_dX;double modelVar_wdepnulrbot;
double d_modelVar_wdepnulrbot_dX;double modelVar_wdepnulrsti;
double d_modelVar_wdepnulrsti_dX;double modelVar_wdepnulrgat;
double d_modelVar_wdepnulrgat_dX;double modelVar_wdepnulrinvbot;
double d_modelVar_wdepnulrinvbot_dX;double modelVar_wdepnulrinvsti;
double d_modelVar_wdepnulrinvsti_dX;double modelVar_wdepnulrinvgat;
double d_modelVar_wdepnulrinvgat_dX;double modelVar_VBIRBOTinv;
double d_modelVar_VBIRBOTinv_dX;double modelVar_VBIRSTIinv;
double d_modelVar_VBIRSTIinv_dX;double modelVar_VBIRGATinv;
double d_modelVar_VBIRGATinv_dX;double modelVar_atatbot;
double d_modelVar_atatbot_dX;double modelVar_atatsti;
double d_modelVar_atatsti_dX;double modelVar_atatgat;
double d_modelVar_atatgat_dX;double modelVar_btatpartbot;
double d_modelVar_btatpartbot_dX;double modelVar_btatpartsti;
double d_modelVar_btatpartsti_dX;double modelVar_btatpartgat;
double d_modelVar_btatpartgat_dX;double modelVar_fbbtbot;
double d_modelVar_fbbtbot_dX;double modelVar_fbbtsti;
double d_modelVar_fbbtsti_dX;double modelVar_fbbtgat;
double d_modelVar_fbbtgat_dX;double modelVar_alphaav;
double d_modelVar_alphaav_dX;double modelVar_fstopbot;
double d_modelVar_fstopbot_dX;double modelVar_fstopsti;
double d_modelVar_fstopsti_dX;double modelVar_fstopgat;
double d_modelVar_fstopgat_dX;double modelVar_VBRinvbot;
double d_modelVar_VBRinvbot_dX;double modelVar_VBRinvsti;
double d_modelVar_VBRinvsti_dX;double modelVar_VBRinvgat;
double d_modelVar_VBRinvgat_dX;double modelVar_slopebot;
double d_modelVar_slopebot_dX;double modelVar_slopesti;
double d_modelVar_slopesti_dX;double modelVar_slopegat;
double d_modelVar_slopegat_dX;};



//-----------------------------------------------------------------------------
// Free functions used by sensitivity
//
//-----------------------------------------------------------------------------
void evaluateModelEquations(
std::vector <double> & probeVars,
// probe constants
const int admsProbeID_V_A_GND,
const int admsProbeID_V_A_K,
// node constants
const int admsNodeID_A,
const int admsNodeID_K,
instanceSensStruct & instanceStruct,
modelSensStruct & modelStruct,
// basic variables
 double admsTemperature, double adms_vt_nom, double ADMSgmin_arg, std::vector <double> & d_staticContributions_dX, std::vector <double> & d_dynamicContributions_dX, const Instance & theInstance);

void evaluateInitialInstance(
instanceSensStruct & instanceStruct,
modelSensStruct & modelStruct,
 double admsTemperature,double adms_vt_nom, double ADMSgmin_arg, const Instance & theInstance);

void evaluateInitialModel(
modelSensStruct & modelStruct,
 double admsTemperature, double ADMSgmin_arg, const Instance & theInstance);

#endif // Xyce_ADMS_SENSITIVITIES


// Limited exponential --- NOT what verilog LRM says, but what qucs,
// ng-spice, and zspice do.

template <typename T>
T limexp(const T &x)
{
  if ((x) < 80.0)
  return (exp(x));
  else
  return (exp(80.0)*(x-79.0));
}


struct Traits: public DeviceTraits<Model, Instance, Diode::Traits>
{
  static const char *name() {return "JUNCAP200 Diode";}
  static const char *deviceTypeName() {return "d level 200";}

  static int numNodes() {return 2;}


  static bool modelRequired() {return true;}
  static bool isLinearDevice() {return false;}

  static Device *factory(const Configuration &configuration, const FactoryBlock &factory_block);
  static void loadModelParameters(ParametricData<Model> &model_parameters);
  static void loadInstanceParameters(ParametricData<Instance> &instance_parameters);
};

//-----------------------------------------------------------------------------
// Class         : Instance

//
// Purpose       : This class represents a single instance  of the
//                 device.  It mainly contains indices and pointers into
//                 the matrix equation (see the resistor instance class for
//                 more details).
//
// Special Notes :
// Creator       :
// Creation Date :
//-----------------------------------------------------------------------------
class Instance : public DeviceInstance
{
  friend class ParametricData<Instance>;
  friend class Model;
#ifdef Xyce_ADMS_SENSITIVITIES
  friend class InstanceSensitivity;
  friend class ModelSensitivity;
#endif // Xyce_ADMS_SENSITIVITIES
  friend struct Traits;

  public:
    Instance(
      const Configuration &       configuration,
      const InstanceBlock &       instance_block,
      Model &                     model,
      const FactoryBlock &        factory_block);

    ~Instance();

private:
    Instance(const Instance &);
    Instance &operator=(const Instance &);

public:
    void registerLIDs( const LocalIdVector & intLIDVecRef,
                       const LocalIdVector & extLIDVecRef );
    void registerStoreLIDs( const LocalIdVector & stoLIDVecRef );
    void setupPointers();

    void loadNodeSymbols(Util::SymbolTable &symbol_table) const;

    const JacobianStamp & jacobianStamp() const;
    void registerJacLIDs( const JacobianStamp & jacLIDVec );

    void registerBranchDataLIDs(const std::vector<int> & branchLIDVecRef);

    bool processParams();
    bool updateTemperature ( const double & temp = -999.0 );
    bool updateIntermediateVars ();
    bool updatePrimaryState ();
    bool updateSecondaryState ();

    // load functions, residual:
    bool loadDAEQVector ();
    bool loadDAEFVector ();

    // load functions, Jacobian:
    bool loadDAEdQdx ();
    bool loadDAEdFdx ();

      int getNumNoiseSources () const;  // 1
      void setupNoiseSources (Xyce::Analysis::NoiseData & noiseData);
      void getNoiseSources (Xyce::Analysis::NoiseData & noiseData);

  private:

  public:
    // iterator reference to the JUNCAP200 model which owns this instance.
    // Getters and setters
    Model &getModel()
    {
      return model_;
    }

  private:

    Model & model_;   //< Owning Model
    // Begin verilog Instance Variables
    //   Instance Parameters
    double AB;
    double LS;
    double LG;
    double MULT;
    //  Variables of global_instance scope
    double MULT_i;
    double AB_i;
    double LS_i;
    double LG_i;
    double zflagbot;
    double zflagsti;
    double zflaggat;
    double VMAX;
    double exp_VMAX_over_phitd;
    double vbimin;
    double vch;
    double vfmin;
    double vbbtlim;
    double xhighf1;
    double expxhf1;
    double xhighf2;
    double expxhf2;
    double xhighr;
    double expxhr;
    double ISATFOR1;
    double MFOR1;
    double ISATFOR2;
    double MFOR2;
    double ISATREV;
    double MREV;
    double m0flag;
    double vak;
    double cj;
    double cjbot;
    double cjgat;
    double cjsti;
    double ij;
    double ijbot;
    double ijgat;
    double ijsti;
    double si;
    double idsatsbot;
    double idsatssti;
    double idsatsgat;
    double cjosbot;
    double cjossti;
    double cjosgat;
    double vbisbot;
    double vbissti;
    double vbisgat;
    // end verilog Instance Variables=====
    // Nodal LID Variables
    int li_A;
    int li_K;
    // end Nodal LID Variables
    // Branch LID Variables
    // end Branch LID Variables
    // Lead (branch) LID Variables
    int li_branch_iA;
    // end Lead (branch) LID Variables
    // Jacobian  pointers
    double * f_A_Equ_A_Node_Ptr;
    double * f_A_Equ_K_Node_Ptr;
    double * f_K_Equ_A_Node_Ptr;
    double * f_K_Equ_K_Node_Ptr;
    double * q_A_Equ_A_Node_Ptr;
    double * q_A_Equ_K_Node_Ptr;
    double * q_K_Equ_A_Node_Ptr;
    double * q_K_Equ_K_Node_Ptr;
    // Jacobian offsets
    int A_A_Equ_A_NodeOffset;
    int A_A_Equ_K_NodeOffset;
    int A_K_Equ_A_NodeOffset;
    int A_K_Equ_K_NodeOffset;
    // end of Jacobian and pointers
   // node numbers
    static const int admsNodeID_A = 0;
    static const int admsNodeID_K = 1;
    static const int admsNodeID_GND = -1;
   // end node numbers
   // Additional IDs for branch equations
   // end branch numbers
   // Probe numbers
    static const int admsProbeID_V_A_GND = 0;
    static const int admsProbeID_V_A_K = 1;
   // end probe numbers
   // Store LIDs
   // end store LIDs
   // Store LIDs for output vars
    int li_store_vak;
    int li_store_cj;
    int li_store_cjbot;
    int li_store_cjgat;
    int li_store_cjsti;
    int li_store_ij;
    int li_store_ijbot;
    int li_store_ijgat;
    int li_store_ijsti;
    int li_store_si;
    int li_store_idsatsbot;
    int li_store_idsatssti;
    int li_store_idsatsgat;
    int li_store_cjosbot;
    int li_store_cjossti;
    int li_store_cjosgat;
    int li_store_vbisbot;
    int li_store_vbissti;
    int li_store_vbisgat;
   // end store LIDs for output vars
 // Arrays to hold probes
 std::vector < double > probeVars;
 std::vector < std::vector < double > > d_probeVars;
 // Arrays to hold contributions
 // dynamic contributions are differentiated w.r.t time
 std::vector < double > staticContributions;
 std::vector < std::vector < double > > d_staticContributions;
 std::vector < double > dynamicContributions;
 std::vector < std::vector < double > > d_dynamicContributions;
//vectors to hold noise information for communication between methods
std::vector<double> noiseContribsPower;
std::vector<double> noiseContribsExponent;


    // this is what we'll use when any model uses $temperature.  We'll
    // set it in updateTemperature, and initialize it to whatever
    // is in devOptions when the instance is constructed.
    double admsTemperature;

    // vt at $temperature;
    double adms_vt_nom;


    // This one is for the annoying bogus "XyceADMSInstTemp" parameter
    // that we need so we can set it from the device manager when there's no
    // "TEMP" parameter to use
    double admsInstTemp;


    static JacobianStamp jacStamp;
    static IdVector nodeMap;
    static PairMap pairToJacStampMap;

    // These instance-owned vectors are for storage of lead current data
    std::vector<double> leadCurrentF;
    std::vector<double> leadCurrentQ;


    };


//-----------------------------------------------------------------------------
// Class         : Model

// Purpose       :
// Special Notes :
// Creator       :
// Creation Date :
//-----------------------------------------------------------------------------
class Model : public DeviceModel
{
    typedef std::vector<Instance *> InstanceVector;

    friend class ParametricData<Model>;
    friend class Instance;
#ifdef Xyce_ADMS_SENSITIVITIES
    friend class InstanceSensitivity;
    friend class ModelSensitivity;
#endif // Xyce_ADMS_SENSITIVITIES
    friend struct Traits;

  public:
    Model(
      const Configuration &       configuration,
      const ModelBlock &          model_block,
      const FactoryBlock &        factory_block);

    ~Model();

private:
    Model(const Model &);
    Model &operator=(const Model &);

public:
    virtual void forEachInstance(DeviceInstanceOp &op) const /* override */;
    virtual std::ostream &printOutInstances(std::ostream &os) const;
    bool processParams();
    bool processInstanceParams();

  private:

  public:
    void addInstance(Instance *instance)
    {
      instanceContainer.push_back(instance);
    }

    void setupBaseInstanceContainer()
    {
      std::vector<Instance*>::iterator iter = instanceContainer.begin();
      std::vector<Instance*>::iterator end   = instanceContainer.end();
      for ( ; iter!=end; ++iter)
      {
      Xyce::Device::DeviceModel::baseInstanceContainer.push_back( static_cast<Xyce::Device::DeviceInstance *>(*iter) );
    }
  }

  private:
    std::vector<Instance*> instanceContainer;

  private:

    // This one is for the annoying bogus "XyceADMSInstTemp" parameter
    // that we need so we can set it from the device manager when there's no
    // "TEMP" model parameter to use
    double admsModTemp;
// Begin verilog Model Variables
//   Model Parameters
    int LEVEL;
    int TYPE;
    double DTA;
    double IMAX;
    double TRJ;
    double FREV;
    double CJORBOT;
    double CJORSTI;
    double CJORGAT;
    double VBIRBOT;
    double VBIRSTI;
    double VBIRGAT;
    double PBOT;
    double PSTI;
    double PGAT;
    double PHIGBOT;
    double PHIGSTI;
    double PHIGGAT;
    double IDSATRBOT;
    double IDSATRSTI;
    double IDSATRGAT;
    double CSRHBOT;
    double CSRHSTI;
    double CSRHGAT;
    double XJUNSTI;
    double XJUNGAT;
    double CTATBOT;
    double CTATSTI;
    double CTATGAT;
    double MEFFTATBOT;
    double MEFFTATSTI;
    double MEFFTATGAT;
    double CBBTBOT;
    double CBBTSTI;
    double CBBTGAT;
    double FBBTRBOT;
    double FBBTRSTI;
    double FBBTRGAT;
    double STFBBTBOT;
    double STFBBTSTI;
    double STFBBTGAT;
    double VBRBOT;
    double VBRSTI;
    double VBRGAT;
    double PBRBOT;
    double PBRSTI;
    double PBRGAT;
    double SWJUNEXP;
    double VJUNREF;
    double FJUNQ;
    //  Variables of global_model scope
    double IMAX_i;
    double VBIRBOT_i;
    double VBIRSTI_i;
    double VBIRGAT_i;
    double PBOT_i;
    double PSTI_i;
    double PGAT_i;
    double CSRHBOT_i;
    double CSRHSTI_i;
    double CSRHGAT_i;
    double CTATBOT_i;
    double CTATSTI_i;
    double CTATGAT_i;
    double CBBTBOT_i;
    double CBBTSTI_i;
    double CBBTGAT_i;
    double VBRBOT_i;
    double VBRSTI_i;
    double VBRGAT_i;
    double PBRBOT_i;
    double PBRSTI_i;
    double PBRGAT_i;
    double SWJUNEXP_i;
    double VJUNREF_i;
    double FJUNQ_i;
    double phitr;
    double phitd;
    double phitdinv;
    double perfc;
    double berfc;
    double cerfc;
    double ftdbot;
    double ftdsti;
    double ftdgat;
    double idsatbot;
    double idsatsti;
    double idsatgat;
    double vbibot;
    double vbisti;
    double vbigat;
    double vbiinvbot;
    double vbiinvsti;
    double vbiinvgat;
    double one_minus_PBOT;
    double one_minus_PSTI;
    double one_minus_PGAT;
    double one_over_one_minus_PBOT;
    double one_over_one_minus_PSTI;
    double one_over_one_minus_PGAT;
    double cjobot;
    double cjosti;
    double cjogat;
    double qprefbot;
    double qprefsti;
    double qprefgat;
    double qpref2bot;
    double qpref2sti;
    double qpref2gat;
    double wdepnulrbot;
    double wdepnulrsti;
    double wdepnulrgat;
    double wdepnulrinvbot;
    double wdepnulrinvsti;
    double wdepnulrinvgat;
    double VBIRBOTinv;
    double VBIRSTIinv;
    double VBIRGATinv;
    double atatbot;
    double atatsti;
    double atatgat;
    double btatpartbot;
    double btatpartsti;
    double btatpartgat;
    double fbbtbot;
    double fbbtsti;
    double fbbtgat;
    double alphaav;
    double fstopbot;
    double fstopsti;
    double fstopgat;
    double VBRinvbot;
    double VBRinvsti;
    double VBRinvgat;
    double slopebot;
    double slopesti;
    double slopegat;
    // end verilog model variables=====
};

void registerDevice(const DeviceCountMap& deviceMap = DeviceCountMap(),
                    const std::set<int>& levelSet = std::set<int>());

} // namespace ADMSJUNCAP200
} // namespace Device
} // namespace Xyce
#endif //Xyce_N_DEV_ADMSJUNCAP200_h
