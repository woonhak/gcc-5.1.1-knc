
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_SRPTrustManagerFactory$Manager__
#define __gnu_javax_net_ssl_provider_SRPTrustManagerFactory$Manager__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace sasl
        {
          namespace srp
          {
              class PasswordFile;
          }
        }
      }
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class SRPTrustManagerFactory;
              class SRPTrustManagerFactory$Manager;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace math
    {
        class BigInteger;
    }
    namespace security
    {
        class KeyPair;
    }
  }
}

class gnu::javax::net::ssl::provider::SRPTrustManagerFactory$Manager : public ::java::lang::Object
{

public: // actually package-private
  SRPTrustManagerFactory$Manager(::gnu::javax::net::ssl::provider::SRPTrustManagerFactory *, ::gnu::javax::crypto::sasl::srp::PasswordFile *);
public:
  virtual jboolean contains(::java::lang::String *);
  virtual ::java::security::KeyPair * getKeyPair(::java::lang::String *);
  virtual JArray< jbyte > * getSalt(::java::lang::String *);
  virtual ::java::math::BigInteger * getVerifier(::java::lang::String *);
  virtual ::gnu::javax::crypto::sasl::srp::PasswordFile * getPasswordFile();
private:
  ::gnu::javax::crypto::sasl::srp::PasswordFile * __attribute__((aligned(__alignof__( ::java::lang::Object)))) file;
public: // actually package-private
  ::gnu::javax::net::ssl::provider::SRPTrustManagerFactory * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_SRPTrustManagerFactory$Manager__
