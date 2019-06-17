#ifndef URN_JAUS_JSS_CORE_EVENTS_1_1_EVENTOCCURRED_H
#define URN_JAUS_JSS_CORE_EVENTS_1_1_EVENTOCCURRED_H

#include "JausUtils.h"
#include "InternalEvents/InternalEvent.h"
namespace urn_jaus_jss_core_Events_1_1
{

class DllExport EventOccurred: public JTS::InternalEvent
{
public:
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	EventOccurred();
	virtual ~EventOccurred();
};

}

#endif // URN_JAUS_JSS_CORE_EVENTS_1_1_EVENTOCCURRED_H
