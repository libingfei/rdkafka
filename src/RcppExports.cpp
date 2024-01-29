// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// RdKafkaConsumer
SEXP RdKafkaConsumer(Rcpp::StringVector properties, Rcpp::StringVector values);
RcppExport SEXP _rdkafka_RdKafkaConsumer(SEXP propertiesSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type properties(propertiesSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type values(valuesSEXP);
    rcpp_result_gen = Rcpp::wrap(RdKafkaConsumer(properties, values));
    return rcpp_result_gen;
END_RCPP
}
// RdSubscribe
int RdSubscribe(SEXP consumerPtr, Rcpp::StringVector topics);
RcppExport SEXP _rdkafka_RdSubscribe(SEXP consumerPtrSEXP, SEXP topicsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type consumerPtr(consumerPtrSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type topics(topicsSEXP);
    rcpp_result_gen = Rcpp::wrap(RdSubscribe(consumerPtr, topics));
    return rcpp_result_gen;
END_RCPP
}
// RdAssign
int RdAssign(SEXP consumerPtr, Rcpp::StringVector topics, Rcpp::IntegerVector partitions, Rcpp::IntegerVector offsets);
RcppExport SEXP _rdkafka_RdAssign(SEXP consumerPtrSEXP, SEXP topicsSEXP, SEXP partitionsSEXP, SEXP offsetsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type consumerPtr(consumerPtrSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type topics(topicsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type partitions(partitionsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type offsets(offsetsSEXP);
    rcpp_result_gen = Rcpp::wrap(RdAssign(consumerPtr, topics, partitions, offsets));
    return rcpp_result_gen;
END_RCPP
}
// RdConsume
Rcpp::List RdConsume(SEXP consumerPtr, int numResults, int timeoutMs);
RcppExport SEXP _rdkafka_RdConsume(SEXP consumerPtrSEXP, SEXP numResultsSEXP, SEXP timeoutMsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type consumerPtr(consumerPtrSEXP);
    Rcpp::traits::input_parameter< int >::type numResults(numResultsSEXP);
    Rcpp::traits::input_parameter< int >::type timeoutMs(timeoutMsSEXP);
    rcpp_result_gen = Rcpp::wrap(RdConsume(consumerPtr, numResults, timeoutMs));
    return rcpp_result_gen;
END_RCPP
}
// RdKafkaProducer
SEXP RdKafkaProducer(Rcpp::StringVector properties, Rcpp::StringVector values);
RcppExport SEXP _rdkafka_RdKafkaProducer(SEXP propertiesSEXP, SEXP valuesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type properties(propertiesSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type values(valuesSEXP);
    rcpp_result_gen = Rcpp::wrap(RdKafkaProducer(properties, values));
    return rcpp_result_gen;
END_RCPP
}
// RdProduce
int RdProduce(SEXP producerPtr, Rcpp::StringVector topics, Rcpp::StringVector keys, Rcpp::StringVector payloads, Rcpp::IntegerVector partitions);
RcppExport SEXP _rdkafka_RdProduce(SEXP producerPtrSEXP, SEXP topicsSEXP, SEXP keysSEXP, SEXP payloadsSEXP, SEXP partitionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type producerPtr(producerPtrSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type topics(topicsSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type payloads(payloadsSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type partitions(partitionsSEXP);
    rcpp_result_gen = Rcpp::wrap(RdProduce(producerPtr, topics, keys, payloads, partitions));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rdkafka_RdKafkaConsumer", (DL_FUNC) &_rdkafka_RdKafkaConsumer, 2},
    {"_rdkafka_RdSubscribe", (DL_FUNC) &_rdkafka_RdSubscribe, 2},
    {"_rdkafka_RdAssign", (DL_FUNC) &_rdkafka_RdAssign, 4},
    {"_rdkafka_RdConsume", (DL_FUNC) &_rdkafka_RdConsume, 3},
    {"_rdkafka_RdKafkaProducer", (DL_FUNC) &_rdkafka_RdKafkaProducer, 2},
    {"_rdkafka_RdProduce", (DL_FUNC) &_rdkafka_RdProduce, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_rdkafka(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}