#include "stdafx.h"

//��ֵת�� - ���ֽ�
/*
    ���ø�ʽ�� ���ֽ��͡� ���ֽ� ��ͨ���� ��ת�����ı�����ֵ�� - ϵͳ����֧�ֿ�->��ֵת��
    Ӣ�����ƣ�ToByte
    ���ذ������ı��ڵ��ֽ�ֵ���ı�����һ���ʵ����͵���ֵ��֧��ȫ����д��ʽ��������Ҳ���������������͵�����ת��Ϊ�ֽڡ�������Ϊ�������
    ����<1>������Ϊ����ת�����ı�����ֵ��������Ϊ��ͨ���ͣ�all������
*/
LIBAPI(BYTE, krnln_ToByte)
{
	BYTE nRet=0;
	switch(ArgInf.m_dtDataType)
	{
	case SDT_TEXT:
		{
			char* pStr = krnln_BJCase(1,ArgInf);
			if(pStr)
			{
				nRet = atoi(pStr);
				E_MFree(pStr);
			}
			else
				nRet = 0;
		}
		break;
	case SDT_BYTE:
	case SDT_BOOL:
		nRet = ArgInf.m_byte;
		break;
	case SDT_SHORT:
		nRet = ArgInf.m_short;
		break;
	case SDT_INT:
		nRet = ArgInf.m_int;
		break;
	case SDT_FLOAT:
		nRet = ArgInf.m_float;
		break;
	case SDT_DOUBLE:
		nRet = ArgInf.m_double;
		break;
	case SDT_INT64:
		nRet = ArgInf.m_int64;
		break;
	default:
		nRet = ArgInf.m_byte;
		break;

	}
	return nRet;
}