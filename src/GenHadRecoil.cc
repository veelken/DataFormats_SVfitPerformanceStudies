#include "DataFormats/SVfitPerformanceStudies/interface/GenHadRecoil.h"

namespace svFitMEM 
{

GenHadRecoil::GenHadRecoil()
  : CompositePtrCandidate()
{}

GenHadRecoil::GenHadRecoil(reco::Candidate::Charge q, const reco::Candidate::LorentzVector& p4)
  : CompositePtrCandidate(q, p4)
{}

GenHadRecoil::GenHadRecoil(reco::Candidate::Charge q, const reco::Candidate::PolarLorentzVector& p4)
  : CompositePtrCandidate(q, p4)
{}

void GenHadRecoil::setSignificanceMatrix(const CovMatrix& cov) 
{ 
  cov_ = cov; 
}
  
GenHadRecoil::CovMatrix GenHadRecoil::getSignificanceMatrix() const 
{ 
  return cov_; 
}

}
