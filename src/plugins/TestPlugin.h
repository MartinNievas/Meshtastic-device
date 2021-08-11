#pragma once
#include "SinglePortPlugin.h"


/**
 * A simple example plugin that just replies with "Message received" to any message it receives.
 */
class TestPlugin : public SinglePortPlugin
{
  public:
    /** Constructor
     * name is for debugging output
     */
    TestPlugin() : SinglePortPlugin("test", PortNum_REPLY_APP) {}

  protected:

    /** For reply plugin we do all of our processing in the (normally optional)
     * want_replies handling
    */
    virtual MeshPacket *allocTest();
};
