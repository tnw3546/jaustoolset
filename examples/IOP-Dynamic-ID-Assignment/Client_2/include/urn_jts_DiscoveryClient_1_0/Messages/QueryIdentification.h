#ifndef URN_JTS_DISCOVERYCLIENT_1_0_QUERYIDENTIFICATION_H
#define URN_JTS_DISCOVERYCLIENT_1_0_QUERYIDENTIFICATION_H

#include "JausUtils.h"
#include "Messages/Message.h"
#include "JConstants.h"
namespace urn_jts_DiscoveryClient_1_0
{

class DllExport QueryIdentification: public JTS::Message
{
public:
	static const int ID = 0x2b00;
	
	class DllExport MsgHeader
	{
	public:
		class DllExport HeaderRec
		{
		public:
			void setParent(MsgHeader* parent);
			void setParentPresenceVector();
			jUnsignedShortInteger getMessageID();
			int setMessageID(jUnsignedShortInteger value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			HeaderRec &operator=(const HeaderRec &value);
			bool operator==(const HeaderRec &value) const;
			bool operator!=(const HeaderRec &value) const;
			HeaderRec();
			HeaderRec(const HeaderRec &value);
			virtual ~HeaderRec();
		
		protected:
			MsgHeader* m_parent;
			jUnsignedShortInteger m_MessageID;
		};
	
		HeaderRec* const getHeaderRec();
		int setHeaderRec(const HeaderRec &value);
		void setParentPresenceVector();
		const unsigned int getSize();
		virtual void encode(unsigned char *bytes);
		virtual void decode(const unsigned char *bytes);
		MsgHeader &operator=(const MsgHeader &value);
		bool operator==(const MsgHeader &value) const;
		bool operator!=(const MsgHeader &value) const;
		MsgHeader();
		MsgHeader(const MsgHeader &value);
		virtual ~MsgHeader();
	
	protected:
		HeaderRec m_HeaderRec;
	};
	class DllExport Body
	{
	public:
		class DllExport QueryIdentificationRec
		{
		public:
			void setParent(Body* parent);
			void setParentPresenceVector();
			jUnsignedByte getQueryType();
			int setQueryType(jUnsignedByte value);
			const unsigned int getSize();
			virtual void encode(unsigned char *bytes);
			virtual void decode(const unsigned char *bytes);
			QueryIdentificationRec &operator=(const QueryIdentificationRec &value);
			bool operator==(const QueryIdentificationRec &value) const;
			bool operator!=(const QueryIdentificationRec &value) const;
			QueryIdentificationRec();
			QueryIdentificationRec(const QueryIdentificationRec &value);
			virtual ~QueryIdentificationRec();
		
		protected:
			Body* m_parent;
			jUnsignedByte m_QueryType;
		};
	
		QueryIdentificationRec* const getQueryIdentificationRec();
		int setQueryIdentificationRec(const QueryIdentificationRec &value);
		void setParentPresenceVector();
		const unsigned int getSize();
		virtual void encode(unsigned char *bytes);
		virtual void decode(const unsigned char *bytes);
		Body &operator=(const Body &value);
		bool operator==(const Body &value) const;
		bool operator!=(const Body &value) const;
		Body();
		Body(const Body &value);
		virtual ~Body();
	
	protected:
		QueryIdentificationRec m_QueryIdentificationRec;
	};

	unsigned int getID() { return ID; };
	MsgHeader* const getMsgHeader();
	int setMsgHeader(const MsgHeader &value);
	Body* const getBody();
	int setBody(const Body &value);
	const unsigned int getSize();
	virtual void encode(unsigned char *bytes);
	virtual void decode(const unsigned char *bytes);
	QueryIdentification &operator=(const QueryIdentification &value);
	bool operator==(const QueryIdentification &value) const;
	bool operator!=(const QueryIdentification &value) const;
	QueryIdentification();
	QueryIdentification(const QueryIdentification &value);
	virtual ~QueryIdentification();

protected:
	MsgHeader m_MsgHeader;
	Body m_Body;
};

}

#endif // URN_JTS_DISCOVERYCLIENT_1_0_QUERYIDENTIFICATION_H
