#ifndef DataFormats_SVfitPerformanceStudies_GenHadRecoil_h
#define DataFormats_SVfitPerformanceStudies_GenHadRecoil_h

#include "DataFormats/Candidate/interface/CompositePtrCandidate.h"

#include <Math/SMatrix.h>

namespace svFitMEM {

class GenHadRecoil : public reco::CompositePtrCandidate 
{
 public:
  typedef ROOT::Math::SMatrix<double,4> CovMatrix;

  GenHadRecoil();
  GenHadRecoil(reco::Candidate::Charge q, const reco::Candidate::LorentzVector& p4);
  GenHadRecoil(reco::Candidate::Charge q, const reco::Candidate::PolarLorentzVector& p4);

  void setSignificanceMatrix(const CovMatrix& cov);
  CovMatrix getSignificanceMatrix() const;
    
 private:
  CovMatrix cov_;
};

}

#endif
