/***********           LICENSE HEADER   *******************************
JAUS Tool Set
Copyright (c)  2010, United States Government
All rights reserved.

Redistribution and use in source and binary forms, with or without 
modification, are permitted provided that the following conditions are met:

       Redistributions of source code must retain the above copyright notice, 
this list of conditions and the following disclaimer.

       Redistributions in binary form must reproduce the above copyright 
notice, this list of conditions and the following disclaimer in the 
documentation and/or other materials provided with the distribution.

       Neither the name of the United States Government nor the names of 
its contributors may be used to endorse or promote products derived from 
this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE 
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
POSSIBILITY OF SUCH DAMAGE.
*********************  END OF LICENSE ***********************************/

using System;
using NUnit.Framework;
using urn_org_jts_test_Header6_1_0;

[TestFixture]
public class Header6_utst
{
    private MsgIn m_MsgIn1;
    private MsgIn m_MsgIn2;

    public Header6_utst()
    {
    }

    [SetUp]
    public void setUp()
    {
        m_MsgIn1 = new MsgIn();
        m_MsgIn2 = new MsgIn();
    }

    void tearDown()
    {
    }

    [Test]
    public void testConstructionDefaults()
    {
        Console.WriteLine("[executing test (testConstructionDefaults)]");

    }

    [Test]
    public void testSetGetOperations()
    {
        byte[] buff1 = new byte[4096];
        byte[] buff2 = new byte[4096];
        byte t = 0;
        int i;

        Console.WriteLine("[executing test (testSetGetOperations)(TP_3.3.5.1)]");

        // verifying set/getData reciprocity and getLength consistency"   
        for (i = 0, t = 51; i < 4000; i++)
        {
            buff1[i] = t;
            t = (byte)((t * 71) + 13);
            buff2[i] = t;
            t = (byte)((t * 71) + 13);
        }
        m_MsgIn1.getHeader().getRecord4().getVariableLengthField1().set(4000, buff1);
        m_MsgIn2.getHeader().getRecord4().getVariableLengthField1().set(4000, buff2);

        Assert.AreEqual(4000, m_MsgIn1.getHeader().getRecord4().getVariableLengthField1().getLength());
        Assert.AreEqual(4000, m_MsgIn2.getHeader().getRecord4().getVariableLengthField1().getLength());

        for (i = 0; i < 4000; i++)
        {
            Assert.AreEqual(buff1[i], m_MsgIn1.getHeader().getRecord4().getVariableLengthField1().getData()[i]);
            Assert.AreEqual(buff2[i], m_MsgIn2.getHeader().getRecord4().getVariableLengthField1().getData()[i]);
        }
    }

    [Test]
    public void testEncodeToSpec()
    {
        byte[] buff = new byte[1024];
        int i;

        for (i = 0; i < 770; i++)
            buff[i] = (byte)(i % 256);

        //    m_MsgIn1.getHeader().getHeaderRec().setMessageID(256);
        m_MsgIn1.getHeader().getRecord4().getVariableLengthField1().set(770, buff);

        // verifying message level encode is AS-5684 compliant"
        m_MsgIn1.encode(buff, 0);

        Assert.AreEqual(2, buff[0]);
        Assert.AreEqual(3, buff[1]);
        Assert.AreEqual(0, buff[2]);
        Assert.AreEqual(0, buff[3]);
        for (i = 0; i < m_MsgIn1.getSize() - 4; i++)
        {
            Assert.AreEqual((i % 256), buff[i + 4]);

        }
    }

    [Test]
    public void testEncodeDecodeOperations()
    {
        byte[] buff = new byte[1024];
        byte[] data = new byte[1000];

        int i = 0;

        for (i = 0; i < 1024; i++)
        {
            buff[i] = (byte)(((4101 * i) + 65543) % 256);
        }

        for (i = 0; i < 1000; i++)
        {
            data[i] = (byte)(255 - i);
        }

        Console.WriteLine("[executing test (testEncodeDecodeOperations)(TP_3.3.5.3)]");

        // verifying message level encode/decode reciprocity"

        m_MsgIn1.getHeader().getRecord4().getVariableLengthField1().set(1000, data);
        m_MsgIn2.getHeader().getRecord4().getVariableLengthField1().set(1011, buff);

        m_MsgIn1.encode(buff, 0);
        m_MsgIn2.decode(buff, 0);

        Assert.AreEqual(1000, m_MsgIn2.getHeader().getRecord4().getVariableLengthField1().getLength());
        for (i = 0; i < 1000; i++)
            Assert.AreEqual(data[i], m_MsgIn2.getHeader().getRecord4().getVariableLengthField1().getData()[i]);

        // verifying record level encode/decode reciprocity"

        for (i = 0; i < 1011; i++) buff[i] = 0;
        m_MsgIn2.getHeader().getRecord4().getVariableLengthField1().set(1011, buff);

        m_MsgIn1.getHeader().encode(buff, 0);
        m_MsgIn2.getHeader().decode(buff, 0);

        Assert.AreEqual(1000, m_MsgIn2.getHeader().getRecord4().getVariableLengthField1().getLength());
        for (i = 0; i < 1000; i++)
            Assert.AreEqual(data[i], m_MsgIn2.getHeader().getRecord4().getVariableLengthField1().getData()[i]);

        for (i = 0; i < 1011; i++) buff[i] = 0;
        m_MsgIn2.getHeader().getRecord4().getVariableLengthField1().set(1011, buff);

        m_MsgIn1.getHeader().getRecord4().encode(buff, 0);
        m_MsgIn2.getHeader().getRecord4().decode(buff, 0);

        Assert.AreEqual(1000, m_MsgIn2.getHeader().getRecord4().getVariableLengthField1().getLength());
        for (i = 0; i < 1000; i++)
            Assert.AreEqual(data[i], m_MsgIn2.getHeader().getRecord4().getVariableLengthField1().getData()[i]);
    }

    [Test]
    public void testEquality()
    {
        Console.WriteLine("[executing test (testEquality)]");
        // verifying message equality operator"    
        Assert.IsTrue(m_MsgIn1.isEqual(m_MsgIn1));
        Assert.IsTrue(m_MsgIn2.isEqual(m_MsgIn1));
        Assert.IsTrue(m_MsgIn1.isEqual(m_MsgIn2));
    }

    [Test]
    public void testInequality()
    {
        Console.WriteLine("[executing test (testInequality)]");
        // verifying message inequality operator"    
        Assert.IsFalse(m_MsgIn1.notEquals(m_MsgIn2));
        Assert.IsFalse(m_MsgIn2.notEquals(m_MsgIn1));
    }

    public static void Main()
    {
    }
}
