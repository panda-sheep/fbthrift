/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/SomeService.h>
#include <folly/python/futures.h>
#include <Python.h>

#include <memory>

namespace apache {
namespace thrift {
namespace fixtures {
namespace types {

class SomeServiceWrapper : virtual public SomeServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit SomeServiceWrapper(PyObject *if_object, folly::Executor *exc);
    folly::Future<std::unique_ptr<std::unordered_map<int32_t,std::string>>> future_bounce_map(
        std::unique_ptr<std::unordered_map<int32_t,std::string>> m
    ) override;
    folly::Future<std::unique_ptr<std::map<std::string,int64_t>>> future_binary_keyed_map(
        std::unique_ptr<std::vector<int64_t>> r
    ) override;
};

std::shared_ptr<apache::thrift::ServerInterface> SomeServiceInterface(PyObject *if_object, folly::Executor *exc);
} // namespace apache
} // namespace thrift
} // namespace fixtures
} // namespace types
