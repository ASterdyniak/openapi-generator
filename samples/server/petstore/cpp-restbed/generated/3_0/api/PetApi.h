/**
 * OpenAPI Petstore
 * This spec is mainly for testing Petstore server and contains fake endpoints, models. Please do not use this for any other purpose. Special characters: \" \\
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.2.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * PetApi.h
 *
 * 
 */

#ifndef PetApi_H_
#define PetApi_H_


#include <memory>
#include <utility>
#include <exception>
#include <functional>

#include <corvusoft/restbed/session.hpp>
#include <corvusoft/restbed/resource.hpp>
#include <corvusoft/restbed/request.hpp>
#include <corvusoft/restbed/service.hpp>
#include <corvusoft/restbed/settings.hpp>

#include "ApiResponse.h"
#include "Pet.h"
#include <set>
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

///
/// Exception to flag problems in the handlers
///
class  PetApiException: public std::exception
{
public:
    PetApiException(int status_code, std::string what);

    int getStatus() const;
    const char* what() const noexcept override;

private:
    int m_status;
    std::string m_what;
};

namespace PetApiResources {
/// <summary>
/// Add a new pet to the store
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  PetResource: public restbed::Resource
{
public:
    PetResource(const std::string& context = "/v2");
    virtual ~PetResource() = default;

    PetResource(
        const PetResource& other) = default; // copy constructor
    PetResource(PetResource&& other) noexcept = default; // move constructor

    PetResource& operator=(const PetResource& other) = default; // copy assignment
    PetResource& operator=(PetResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<int(
        Pet & pet)> handler_POST_func =
            [](Pet &) -> int
                { throw PetApiException(501, "Not implemented"); };

    std::function<int(
        Pet & pet)> handler_PUT_func =
            [](Pet &) -> int
                { throw PetApiException(501, "Not implemented"); };


protected:
    //////////////////////////////////////////////////////////
    // As an alternative to setting the `std::function`s    //
    // override these to implement the server functionality //
    //////////////////////////////////////////////////////////

    virtual int handler_POST(
        Pet & pet);

    virtual int handler_PUT(
        Pet & pet);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string extractBodyContent(const std::shared_ptr<restbed::Session>& session);
    virtual std::string extractFormParamsFromBody(const std::string& paramName, const std::string& body);

    virtual std::pair<int, std::string> handlePetApiException(const PetApiException& e);
    virtual std::pair<int, std::string> handleStdException(const std::exception& e);
    virtual std::pair<int, std::string> handleUnspecifiedException();

    virtual void setResponseHeader(const std::shared_ptr<restbed::Session>& session,
        const std::string& header);

    virtual void returnResponse(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result, std::multimap<std::string, std::string>& contentType);
    virtual void defaultSessionClose(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result);

private:
    void handler_POST_internal(const std::shared_ptr<restbed::Session> session);
    void handler_PUT_internal(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Deletes a pet
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  PetPetIdResource: public restbed::Resource
{
public:
    PetPetIdResource(const std::string& context = "/v2");
    virtual ~PetPetIdResource() = default;

    PetPetIdResource(
        const PetPetIdResource& other) = default; // copy constructor
    PetPetIdResource(PetPetIdResource&& other) noexcept = default; // move constructor

    PetPetIdResource& operator=(const PetPetIdResource& other) = default; // copy assignment
    PetPetIdResource& operator=(PetPetIdResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<int(
        int64_t & petId, std::string & apiKey)> handler_DELETE_func =
            [](int64_t &, std::string &) -> int
                { throw PetApiException(501, "Not implemented"); };

    std::function<std::pair<int, Pet>(
        int64_t & petId)> handler_GET_func =
            [](int64_t &) -> std::pair<int, Pet>
                { throw PetApiException(501, "Not implemented"); };

    std::function<int(
        int64_t & petId, std::string & name, std::string & status)> handler_POST_func =
            [](int64_t &, std::string &, std::string &) -> int
                { throw PetApiException(501, "Not implemented"); };


protected:
    //////////////////////////////////////////////////////////
    // As an alternative to setting the `std::function`s    //
    // override these to implement the server functionality //
    //////////////////////////////////////////////////////////

    virtual int handler_DELETE(
        int64_t & petId, std::string & apiKey);

    virtual std::pair<int, Pet> handler_GET(
        int64_t & petId);
    virtual int handler_POST(
        int64_t & petId, std::string & name, std::string & status);

protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string extractBodyContent(const std::shared_ptr<restbed::Session>& session);
    virtual std::string extractFormParamsFromBody(const std::string& paramName, const std::string& body);

    virtual std::pair<int, std::string> handlePetApiException(const PetApiException& e);
    virtual std::pair<int, std::string> handleStdException(const std::exception& e);
    virtual std::pair<int, std::string> handleUnspecifiedException();

    virtual void setResponseHeader(const std::shared_ptr<restbed::Session>& session,
        const std::string& header);

    virtual void returnResponse(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result, std::multimap<std::string, std::string>& contentType);
    virtual void defaultSessionClose(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result);

private:
    void handler_DELETE_internal(const std::shared_ptr<restbed::Session> session);
    void handler_GET_internal(const std::shared_ptr<restbed::Session> session);
    void handler_POST_internal(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Finds Pets by status
/// </summary>
/// <remarks>
/// Multiple status values can be provided with comma separated strings
/// </remarks>
class  PetFindByStatusResource: public restbed::Resource
{
public:
    PetFindByStatusResource(const std::string& context = "/v2");
    virtual ~PetFindByStatusResource() = default;

    PetFindByStatusResource(
        const PetFindByStatusResource& other) = default; // copy constructor
    PetFindByStatusResource(PetFindByStatusResource&& other) noexcept = default; // move constructor

    PetFindByStatusResource& operator=(const PetFindByStatusResource& other) = default; // copy assignment
    PetFindByStatusResource& operator=(PetFindByStatusResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::vector<Pet>>(
        std::vector<std::string> & status)> handler_GET_func =
            [](std::vector<std::string> &) -> std::pair<int, std::vector<Pet>>
                { throw PetApiException(501, "Not implemented"); };


protected:
    //////////////////////////////////////////////////////////
    // As an alternative to setting the `std::function`s    //
    // override these to implement the server functionality //
    //////////////////////////////////////////////////////////

    virtual std::pair<int, std::vector<Pet>> handler_GET(
        std::vector<std::string> & status);


protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string extractBodyContent(const std::shared_ptr<restbed::Session>& session);
    virtual std::string extractFormParamsFromBody(const std::string& paramName, const std::string& body);

    virtual std::pair<int, std::string> handlePetApiException(const PetApiException& e);
    virtual std::pair<int, std::string> handleStdException(const std::exception& e);
    virtual std::pair<int, std::string> handleUnspecifiedException();

    virtual void setResponseHeader(const std::shared_ptr<restbed::Session>& session,
        const std::string& header);

    virtual void returnResponse(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result, std::multimap<std::string, std::string>& contentType);
    virtual void defaultSessionClose(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result);

private:
    void handler_GET_internal(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// Finds Pets by tags
/// </summary>
/// <remarks>
/// Multiple tags can be provided with comma separated strings. Use tag1, tag2, tag3 for testing.
/// </remarks>
class  PetFindByTagsResource: public restbed::Resource
{
public:
    PetFindByTagsResource(const std::string& context = "/v2");
    virtual ~PetFindByTagsResource() = default;

    PetFindByTagsResource(
        const PetFindByTagsResource& other) = default; // copy constructor
    PetFindByTagsResource(PetFindByTagsResource&& other) noexcept = default; // move constructor

    PetFindByTagsResource& operator=(const PetFindByTagsResource& other) = default; // copy assignment
    PetFindByTagsResource& operator=(PetFindByTagsResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, std::set<Pet>>(
        std::set<std::string> & tags)> handler_GET_func =
            [](std::set<std::string> &) -> std::pair<int, std::set<Pet>>
                { throw PetApiException(501, "Not implemented"); };


protected:
    //////////////////////////////////////////////////////////
    // As an alternative to setting the `std::function`s    //
    // override these to implement the server functionality //
    //////////////////////////////////////////////////////////

    virtual std::pair<int, std::set<Pet>> handler_GET(
        std::set<std::string> & tags);


protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string extractBodyContent(const std::shared_ptr<restbed::Session>& session);
    virtual std::string extractFormParamsFromBody(const std::string& paramName, const std::string& body);

    virtual std::pair<int, std::string> handlePetApiException(const PetApiException& e);
    virtual std::pair<int, std::string> handleStdException(const std::exception& e);
    virtual std::pair<int, std::string> handleUnspecifiedException();

    virtual void setResponseHeader(const std::shared_ptr<restbed::Session>& session,
        const std::string& header);

    virtual void returnResponse(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result, std::multimap<std::string, std::string>& contentType);
    virtual void defaultSessionClose(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result);

private:
    void handler_GET_internal(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// uploads an image
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  PetPetIdUploadImageResource: public restbed::Resource
{
public:
    PetPetIdUploadImageResource(const std::string& context = "/v2");
    virtual ~PetPetIdUploadImageResource() = default;

    PetPetIdUploadImageResource(
        const PetPetIdUploadImageResource& other) = default; // copy constructor
    PetPetIdUploadImageResource(PetPetIdUploadImageResource&& other) noexcept = default; // move constructor

    PetPetIdUploadImageResource& operator=(const PetPetIdUploadImageResource& other) = default; // copy assignment
    PetPetIdUploadImageResource& operator=(PetPetIdUploadImageResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, ApiResponse>(
        int64_t & petId, std::string & additionalMetadata, std::string & file)> handler_POST_func =
            [](int64_t &, std::string &, std::string &) -> std::pair<int, ApiResponse>
                { throw PetApiException(501, "Not implemented"); };


protected:
    //////////////////////////////////////////////////////////
    // As an alternative to setting the `std::function`s    //
    // override these to implement the server functionality //
    //////////////////////////////////////////////////////////

    virtual std::pair<int, ApiResponse> handler_POST(
        int64_t & petId, std::string & additionalMetadata, std::string & file);


protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string extractBodyContent(const std::shared_ptr<restbed::Session>& session);
    virtual std::string extractFormParamsFromBody(const std::string& paramName, const std::string& body);

    virtual std::pair<int, std::string> handlePetApiException(const PetApiException& e);
    virtual std::pair<int, std::string> handleStdException(const std::exception& e);
    virtual std::pair<int, std::string> handleUnspecifiedException();

    virtual void setResponseHeader(const std::shared_ptr<restbed::Session>& session,
        const std::string& header);

    virtual void returnResponse(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result, std::multimap<std::string, std::string>& contentType);
    virtual void defaultSessionClose(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result);

private:
    void handler_POST_internal(const std::shared_ptr<restbed::Session> session);
};

/// <summary>
/// uploads an image (required)
/// </summary>
/// <remarks>
/// 
/// </remarks>
class  FakePetIdUploadImageWithRequiredFileResource: public restbed::Resource
{
public:
    FakePetIdUploadImageWithRequiredFileResource(const std::string& context = "/v2");
    virtual ~FakePetIdUploadImageWithRequiredFileResource() = default;

    FakePetIdUploadImageWithRequiredFileResource(
        const FakePetIdUploadImageWithRequiredFileResource& other) = default; // copy constructor
    FakePetIdUploadImageWithRequiredFileResource(FakePetIdUploadImageWithRequiredFileResource&& other) noexcept = default; // move constructor

    FakePetIdUploadImageWithRequiredFileResource& operator=(const FakePetIdUploadImageWithRequiredFileResource& other) = default; // copy assignment
    FakePetIdUploadImageWithRequiredFileResource& operator=(FakePetIdUploadImageWithRequiredFileResource&& other) noexcept = default; // move assignment

    /////////////////////////////////////////////////////
    // Set these to implement the server functionality //
    /////////////////////////////////////////////////////
    std::function<std::pair<int, ApiResponse>(
        int64_t & petId, std::string & requiredFile, std::string & additionalMetadata)> handler_POST_func =
            [](int64_t &, std::string &, std::string &) -> std::pair<int, ApiResponse>
                { throw PetApiException(501, "Not implemented"); };


protected:
    //////////////////////////////////////////////////////////
    // As an alternative to setting the `std::function`s    //
    // override these to implement the server functionality //
    //////////////////////////////////////////////////////////

    virtual std::pair<int, ApiResponse> handler_POST(
        int64_t & petId, std::string & requiredFile, std::string & additionalMetadata);


protected:
    //////////////////////////////////////
    // Override these for customization //
    //////////////////////////////////////

    virtual std::string extractBodyContent(const std::shared_ptr<restbed::Session>& session);
    virtual std::string extractFormParamsFromBody(const std::string& paramName, const std::string& body);

    virtual std::pair<int, std::string> handlePetApiException(const PetApiException& e);
    virtual std::pair<int, std::string> handleStdException(const std::exception& e);
    virtual std::pair<int, std::string> handleUnspecifiedException();

    virtual void setResponseHeader(const std::shared_ptr<restbed::Session>& session,
        const std::string& header);

    virtual void returnResponse(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result, std::multimap<std::string, std::string>& contentType);
    virtual void defaultSessionClose(const std::shared_ptr<restbed::Session>& session,
        const int status, const std::string& result);

private:
    void handler_POST_internal(const std::shared_ptr<restbed::Session> session);
};

} /* namespace PetApiResources */

using PetApiPetResource [[deprecated]] = PetApiResources::PetResource;
using PetApiPetPetIdResource [[deprecated]] = PetApiResources::PetPetIdResource;
using PetApiPetFindByStatusResource [[deprecated]] = PetApiResources::PetFindByStatusResource;
using PetApiPetFindByTagsResource [[deprecated]] = PetApiResources::PetFindByTagsResource;
using PetApiPetPetIdUploadImageResource [[deprecated]] = PetApiResources::PetPetIdUploadImageResource;
using PetApiFakePetIdUploadImageWithRequiredFileResource [[deprecated]] = PetApiResources::FakePetIdUploadImageWithRequiredFileResource;

//
// The restbed service to actually implement the REST server
//
class  PetApi
{
public:
    explicit PetApi(std::shared_ptr<restbed::Service> const& restbedService);
	virtual ~PetApi();

    std::shared_ptr<PetApiResources::PetResource> getPetResource();
    std::shared_ptr<PetApiResources::PetPetIdResource> getPetPetIdResource();
    std::shared_ptr<PetApiResources::PetFindByStatusResource> getPetFindByStatusResource();
    std::shared_ptr<PetApiResources::PetFindByTagsResource> getPetFindByTagsResource();
    std::shared_ptr<PetApiResources::PetPetIdUploadImageResource> getPetPetIdUploadImageResource();
    std::shared_ptr<PetApiResources::FakePetIdUploadImageWithRequiredFileResource> getFakePetIdUploadImageWithRequiredFileResource();

    void setResource(std::shared_ptr<PetApiResources::PetResource> resource);
    void setResource(std::shared_ptr<PetApiResources::PetPetIdResource> resource);
    void setResource(std::shared_ptr<PetApiResources::PetFindByStatusResource> resource);
    void setResource(std::shared_ptr<PetApiResources::PetFindByTagsResource> resource);
    void setResource(std::shared_ptr<PetApiResources::PetPetIdUploadImageResource> resource);
    void setResource(std::shared_ptr<PetApiResources::FakePetIdUploadImageWithRequiredFileResource> resource);
    [[deprecated("use setResource()")]]
    virtual void setPetApiPetResource(std::shared_ptr<PetApiResources::PetResource> spPetApiPetResource);
    [[deprecated("use setResource()")]]
    virtual void setPetApiPetPetIdResource(std::shared_ptr<PetApiResources::PetPetIdResource> spPetApiPetPetIdResource);
    [[deprecated("use setResource()")]]
    virtual void setPetApiPetFindByStatusResource(std::shared_ptr<PetApiResources::PetFindByStatusResource> spPetApiPetFindByStatusResource);
    [[deprecated("use setResource()")]]
    virtual void setPetApiPetFindByTagsResource(std::shared_ptr<PetApiResources::PetFindByTagsResource> spPetApiPetFindByTagsResource);
    [[deprecated("use setResource()")]]
    virtual void setPetApiPetPetIdUploadImageResource(std::shared_ptr<PetApiResources::PetPetIdUploadImageResource> spPetApiPetPetIdUploadImageResource);
    [[deprecated("use setResource()")]]
    virtual void setPetApiFakePetIdUploadImageWithRequiredFileResource(std::shared_ptr<PetApiResources::FakePetIdUploadImageWithRequiredFileResource> spPetApiFakePetIdUploadImageWithRequiredFileResource);

    virtual void publishDefaultResources();

    virtual std::shared_ptr<restbed::Service> service();

protected:
	std::shared_ptr<PetApiResources::PetResource> m_spPetResource;
	std::shared_ptr<PetApiResources::PetPetIdResource> m_spPetPetIdResource;
	std::shared_ptr<PetApiResources::PetFindByStatusResource> m_spPetFindByStatusResource;
	std::shared_ptr<PetApiResources::PetFindByTagsResource> m_spPetFindByTagsResource;
	std::shared_ptr<PetApiResources::PetPetIdUploadImageResource> m_spPetPetIdUploadImageResource;
	std::shared_ptr<PetApiResources::FakePetIdUploadImageWithRequiredFileResource> m_spFakePetIdUploadImageWithRequiredFileResource;

private:
    std::shared_ptr<restbed::Service> m_service;
};


}
}
}
}

#endif /* PetApi_H_ */

