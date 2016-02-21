
#include "DataFormats/Common/interface/Wrapper.h"

#include "DataFormats/SVfitPerformanceStudies/interface/GenHadRecoil.h"
#include "DataFormats/SVfitPerformanceStudies/interface/GenHadRecoilFwd.h"

namespace 
{
  struct dictionary 
  {
    svFitMEM::GenHadRecoil hadRecoil;
    svFitMEM::GenHadRecoilCollection hadRecoils;
    edm::Wrapper<svFitMEM::GenHadRecoilCollection> hadRecoils_wrapper;
  };
}

