#ifndef VAR1
#VAR2 ""
#VAR2 ""
namespace VAR3
{
VAR4::FUN1(badStruct VAR5)
{
 VAR6 = VAR5;
 /* FLAW: overwrite linked list pointers with user data */
 if (fgets((char*)&VAR6, sizeof(VAR6), stdin) == NULL)
 {
 FUN2("");
 FUN3(1);
 }
}
VAR4::~FUN1()
{
 /* POTENTIAL FLAW: The following removes 'a' from the list. Because of the possible overflow this
 VAR7 = VAR6.VAR8.VAR9;
 VAR10 = VAR6.VAR8.VAR11;
 VAR7->VAR11 = VAR10;
 VAR10->VAR9 = VAR7;
}
}
#endif
