// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// nearPDc
arma::mat nearPDc(arma::mat X);
RcppExport SEXP _TrainSel_nearPDc(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(nearPDc(X));
    return rcpp_result_gen;
END_RCPP
}
// TrainSelC
List TrainSelC(List Data, List CANDIDATES, Rcpp::IntegerVector setsizes, Rcpp::CharacterVector settypes, Rcpp::Function Stat, bool CD, Rcpp::IntegerVector Target, List control, int ntotal);
RcppExport SEXP _TrainSel_TrainSelC(SEXP DataSEXP, SEXP CANDIDATESSEXP, SEXP setsizesSEXP, SEXP settypesSEXP, SEXP StatSEXP, SEXP CDSEXP, SEXP TargetSEXP, SEXP controlSEXP, SEXP ntotalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type Data(DataSEXP);
    Rcpp::traits::input_parameter< List >::type CANDIDATES(CANDIDATESSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type setsizes(setsizesSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type settypes(settypesSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type Stat(StatSEXP);
    Rcpp::traits::input_parameter< bool >::type CD(CDSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type Target(TargetSEXP);
    Rcpp::traits::input_parameter< List >::type control(controlSEXP);
    Rcpp::traits::input_parameter< int >::type ntotal(ntotalSEXP);
    rcpp_result_gen = Rcpp::wrap(TrainSelC(Data, CANDIDATES, setsizes, settypes, Stat, CD, Target, control, ntotal));
    return rcpp_result_gen;
END_RCPP
}
// SelectSetMO
List SelectSetMO(const Rcpp::List& Data, const Rcpp::IntegerVector& Candidates, int ntoselect, const Rcpp::Function selectionstat, int nstats, bool Ordered, int npopGA, double mutprob, int mutintensity, int nitGA, int minlengthfrontier, int niterExc, int niterSANN, double stepSANN, bool display_progress);
RcppExport SEXP _TrainSel_SelectSetMO(SEXP DataSEXP, SEXP CandidatesSEXP, SEXP ntoselectSEXP, SEXP selectionstatSEXP, SEXP nstatsSEXP, SEXP OrderedSEXP, SEXP npopGASEXP, SEXP mutprobSEXP, SEXP mutintensitySEXP, SEXP nitGASEXP, SEXP minlengthfrontierSEXP, SEXP niterExcSEXP, SEXP niterSANNSEXP, SEXP stepSANNSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Data(DataSEXP);
    Rcpp::traits::input_parameter< const Rcpp::IntegerVector& >::type Candidates(CandidatesSEXP);
    Rcpp::traits::input_parameter< int >::type ntoselect(ntoselectSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Function >::type selectionstat(selectionstatSEXP);
    Rcpp::traits::input_parameter< int >::type nstats(nstatsSEXP);
    Rcpp::traits::input_parameter< bool >::type Ordered(OrderedSEXP);
    Rcpp::traits::input_parameter< int >::type npopGA(npopGASEXP);
    Rcpp::traits::input_parameter< double >::type mutprob(mutprobSEXP);
    Rcpp::traits::input_parameter< int >::type mutintensity(mutintensitySEXP);
    Rcpp::traits::input_parameter< int >::type nitGA(nitGASEXP);
    Rcpp::traits::input_parameter< int >::type minlengthfrontier(minlengthfrontierSEXP);
    Rcpp::traits::input_parameter< int >::type niterExc(niterExcSEXP);
    Rcpp::traits::input_parameter< int >::type niterSANN(niterSANNSEXP);
    Rcpp::traits::input_parameter< double >::type stepSANN(stepSANNSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(SelectSetMO(Data, Candidates, ntoselect, selectionstat, nstats, Ordered, npopGA, mutprob, mutintensity, nitGA, minlengthfrontier, niterExc, niterSANN, stepSANN, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// SelectSetMOBool
List SelectSetMOBool(const Rcpp::List& Data, const int& nbits, const Rcpp::Function selectionstat, int nstats, int npopGA, double mutprob, int mutintensity, int nitGA, int minlengthfrontier, bool display_progress);
RcppExport SEXP _TrainSel_SelectSetMOBool(SEXP DataSEXP, SEXP nbitsSEXP, SEXP selectionstatSEXP, SEXP nstatsSEXP, SEXP npopGASEXP, SEXP mutprobSEXP, SEXP mutintensitySEXP, SEXP nitGASEXP, SEXP minlengthfrontierSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::List& >::type Data(DataSEXP);
    Rcpp::traits::input_parameter< const int& >::type nbits(nbitsSEXP);
    Rcpp::traits::input_parameter< const Rcpp::Function >::type selectionstat(selectionstatSEXP);
    Rcpp::traits::input_parameter< int >::type nstats(nstatsSEXP);
    Rcpp::traits::input_parameter< int >::type npopGA(npopGASEXP);
    Rcpp::traits::input_parameter< double >::type mutprob(mutprobSEXP);
    Rcpp::traits::input_parameter< int >::type mutintensity(mutintensitySEXP);
    Rcpp::traits::input_parameter< int >::type nitGA(nitGASEXP);
    Rcpp::traits::input_parameter< int >::type minlengthfrontier(minlengthfrontierSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(SelectSetMOBool(Data, nbits, selectionstat, nstats, npopGA, mutprob, mutintensity, nitGA, minlengthfrontier, display_progress));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_TrainSel_nearPDc", (DL_FUNC) &_TrainSel_nearPDc, 1},
    {"_TrainSel_TrainSelC", (DL_FUNC) &_TrainSel_TrainSelC, 9},
    {"_TrainSel_SelectSetMO", (DL_FUNC) &_TrainSel_SelectSetMO, 15},
    {"_TrainSel_SelectSetMOBool", (DL_FUNC) &_TrainSel_SelectSetMOBool, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_TrainSel(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
