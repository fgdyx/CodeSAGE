#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(char * VAR5)
{
 VAR6 = VAR5;
 {
 char * VAR7 = new char[100];
 memset(VAR7, '', 100-1);
 VAR7[100-1] = '';
 /* FLAW: Set data pointer to before the allocated memory buffer */
 VAR6 = VAR7 - 8;
 }
}
VAR4::~FUN1()
{
 {
 char VAR8[100*2];
 memset(VAR8, '', 100*2-1);
 VAR8[100*2-1] = '';
 /* POTENTIAL FLAW: Possibly copy from a memory location located before the source buffer */
 strcpy(VAR8, VAR6);
 FUN2(VAR8);
 }
}
}
#endif
