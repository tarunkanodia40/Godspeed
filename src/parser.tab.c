/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "src/parser.y"


	#include<bits/stdc++.h>
	#include "node.hpp"
	#include "tables.hpp"
	#include "datatypes.hpp"
	#include "parser.tab.h"
	using namespace std;

	extern "C" int yylex();
	extern int yyparse();
	extern FILE* yyin;
	void yyerror(const char* s) {
		fprintf(stderr,"%s\n",s);
		exit(1);
	};
	Node* teempppp = new Node("werty");

	SymbolTable* st = new SymbolTable();
	TypesTable* tt = new TypesTable();
	BreakLabels* bl = new BreakLabels();


#line 95 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INTEGER_VAL = 3,                /* INTEGER_VAL  */
  YYSYMBOL_FLOAT_VAL = 4,                  /* FLOAT_VAL  */
  YYSYMBOL_TRUE = 5,                       /* TRUE  */
  YYSYMBOL_FALSE = 6,                      /* FALSE  */
  YYSYMBOL_NULLPOINTER = 7,                /* NULLPOINTER  */
  YYSYMBOL_BREAK = 8,                      /* BREAK  */
  YYSYMBOL_CONTINUE = 9,                   /* CONTINUE  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_SCOLON = 11,                    /* SCOLON  */
  YYSYMBOL_FUNC = 12,                      /* FUNC  */
  YYSYMBOL_STRUCT = 13,                    /* STRUCT  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_PACKAGE = 15,                   /* PACKAGE  */
  YYSYMBOL_IF = 16,                        /* IF  */
  YYSYMBOL_FOR = 17,                       /* FOR  */
  YYSYMBOL_RANGE = 18,                     /* RANGE  */
  YYSYMBOL_IMPORT = 19,                    /* IMPORT  */
  YYSYMBOL_VAR = 20,                       /* VAR  */
  YYSYMBOL_SWITCH = 21,                    /* SWITCH  */
  YYSYMBOL_CASE = 22,                      /* CASE  */
  YYSYMBOL_NEW = 23,                       /* NEW  */
  YYSYMBOL_CONST = 24,                     /* CONST  */
  YYSYMBOL_MAP = 25,                       /* MAP  */
  YYSYMBOL_DEFAULT = 26,                   /* DEFAULT  */
  YYSYMBOL_MAKE = 27,                      /* MAKE  */
  YYSYMBOL_GOTO = 28,                      /* GOTO  */
  YYSYMBOL_FALLTHROUGH = 29,               /* FALLTHROUGH  */
  YYSYMBOL_TYPE = 30,                      /* TYPE  */
  YYSYMBOL_PLUSPLUS = 31,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINUS = 32,                /* MINUSMINUS  */
  YYSYMBOL_ANDNOT = 33,                    /* ANDNOT  */
  YYSYMBOL_ELIPSIS = 34,                   /* ELIPSIS  */
  YYSYMBOL_ADD = 35,                       /* ADD  */
  YYSYMBOL_SUB = 36,                       /* SUB  */
  YYSYMBOL_NOT = 37,                       /* NOT  */
  YYSYMBOL_XOR = 38,                       /* XOR  */
  YYSYMBOL_MUL = 39,                       /* MUL  */
  YYSYMBOL_AND = 40,                       /* AND  */
  YYSYMBOL_OR = 41,                        /* OR  */
  YYSYMBOL_LOGOR = 42,                     /* LOGOR  */
  YYSYMBOL_LOGAND = 43,                    /* LOGAND  */
  YYSYMBOL_ISEQ = 44,                      /* ISEQ  */
  YYSYMBOL_NEQ = 45,                       /* NEQ  */
  YYSYMBOL_LESSEQ = 46,                    /* LESSEQ  */
  YYSYMBOL_GRTEQ = 47,                     /* GRTEQ  */
  YYSYMBOL_GRT = 48,                       /* GRT  */
  YYSYMBOL_LESS = 49,                      /* LESS  */
  YYSYMBOL_MOD = 50,                       /* MOD  */
  YYSYMBOL_QUOT = 51,                      /* QUOT  */
  YYSYMBOL_SHL = 52,                       /* SHL  */
  YYSYMBOL_SHR = 53,                       /* SHR  */
  YYSYMBOL_EQ = 54,                        /* EQ  */
  YYSYMBOL_INFER_EQ = 55,                  /* INFER_EQ  */
  YYSYMBOL_RIGHTPARAN = 56,                /* RIGHTPARAN  */
  YYSYMBOL_RIGHTBRACE = 57,                /* RIGHTBRACE  */
  YYSYMBOL_RIGHTSQUARE = 58,               /* RIGHTSQUARE  */
  YYSYMBOL_LEFTPARAN = 59,                 /* LEFTPARAN  */
  YYSYMBOL_LEFTBRACE = 60,                 /* LEFTBRACE  */
  YYSYMBOL_LEFTSQUARE = 61,                /* LEFTSQUARE  */
  YYSYMBOL_COLON = 62,                     /* COLON  */
  YYSYMBOL_DOT = 63,                       /* DOT  */
  YYSYMBOL_COMMA = 64,                     /* COMMA  */
  YYSYMBOL_RAW_STRING = 65,                /* RAW_STRING  */
  YYSYMBOL_INTERPRETED_STRING = 66,        /* INTERPRETED_STRING  */
  YYSYMBOL_BYTE_VAL = 67,                  /* BYTE_VAL  */
  YYSYMBOL_IDENTIFIER = 68,                /* IDENTIFIER  */
  YYSYMBOL_ASSGN_OP = 69,                  /* ASSGN_OP  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_SourceFile = 71,                /* SourceFile  */
  YYSYMBOL_OpenBlock = 72,                 /* OpenBlock  */
  YYSYMBOL_CloseBlock = 73,                /* CloseBlock  */
  YYSYMBOL_PackageClause = 74,             /* PackageClause  */
  YYSYMBOL_PackageName = 75,               /* PackageName  */
  YYSYMBOL_ImportDeclList = 76,            /* ImportDeclList  */
  YYSYMBOL_ImportDecl = 77,                /* ImportDecl  */
  YYSYMBOL_ImportSpecList = 78,            /* ImportSpecList  */
  YYSYMBOL_ImportSpec = 79,                /* ImportSpec  */
  YYSYMBOL_ImportPath = 80,                /* ImportPath  */
  YYSYMBOL_TopLevelDeclList = 81,          /* TopLevelDeclList  */
  YYSYMBOL_TopLevelDecl = 82,              /* TopLevelDecl  */
  YYSYMBOL_Block = 83,                     /* Block  */
  YYSYMBOL_Condition = 84,                 /* Condition  */
  YYSYMBOL_StatementList = 85,             /* StatementList  */
  YYSYMBOL_Statement = 86,                 /* Statement  */
  YYSYMBOL_Declaration = 87,               /* Declaration  */
  YYSYMBOL_FunctionDecl = 88,              /* FunctionDecl  */
  YYSYMBOL_MethodDecl = 89,                /* MethodDecl  */
  YYSYMBOL_LabeledStmt = 90,               /* LabeledStmt  */
  YYSYMBOL_SimpleStmt = 91,                /* SimpleStmt  */
  YYSYMBOL_EmptyStmt = 92,                 /* EmptyStmt  */
  YYSYMBOL_ExpressionStmt = 93,            /* ExpressionStmt  */
  YYSYMBOL_IncDecStmt = 94,                /* IncDecStmt  */
  YYSYMBOL_Assignment = 95,                /* Assignment  */
  YYSYMBOL_ShortVarDecl = 96,              /* ShortVarDecl  */
  YYSYMBOL_VarDecl = 97,                   /* VarDecl  */
  YYSYMBOL_VarSpecList = 98,               /* VarSpecList  */
  YYSYMBOL_VarSpec = 99,                   /* VarSpec  */
  YYSYMBOL_ConstDecl = 100,                /* ConstDecl  */
  YYSYMBOL_ConstSpecList = 101,            /* ConstSpecList  */
  YYSYMBOL_ConstSpec = 102,                /* ConstSpec  */
  YYSYMBOL_FunctionBody = 103,             /* FunctionBody  */
  YYSYMBOL_Signature = 104,                /* Signature  */
  YYSYMBOL_Result = 105,                   /* Result  */
  YYSYMBOL_TypeList = 106,                 /* TypeList  */
  YYSYMBOL_Parameters = 107,               /* Parameters  */
  YYSYMBOL_ParameterList = 108,            /* ParameterList  */
  YYSYMBOL_ParameterDecl = 109,            /* ParameterDecl  */
  YYSYMBOL_IdentifierList = 110,           /* IdentifierList  */
  YYSYMBOL_Receiver = 111,                 /* Receiver  */
  YYSYMBOL_CompositeLit = 112,             /* CompositeLit  */
  YYSYMBOL_LiteralType = 113,              /* LiteralType  */
  YYSYMBOL_Type = 114,                     /* Type  */
  YYSYMBOL_Operand = 115,                  /* Operand  */
  YYSYMBOL_OperandName = 116,              /* OperandName  */
  YYSYMBOL_LiteralValue = 117,             /* LiteralValue  */
  YYSYMBOL_SliceType = 118,                /* SliceType  */
  YYSYMBOL_ElementList = 119,              /* ElementList  */
  YYSYMBOL_KeyedElement = 120,             /* KeyedElement  */
  YYSYMBOL_Key = 121,                      /* Key  */
  YYSYMBOL_Element = 122,                  /* Element  */
  YYSYMBOL_ReturnStmt = 123,               /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 124,                /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 125,             /* ContinueStmt  */
  YYSYMBOL_GotoStmt = 126,                 /* GotoStmt  */
  YYSYMBOL_SwitchStmt = 127,               /* SwitchStmt  */
  YYSYMBOL_ExprSwitchStmt = 128,           /* ExprSwitchStmt  */
  YYSYMBOL_ExprCaseClauseList = 129,       /* ExprCaseClauseList  */
  YYSYMBOL_ExprCaseClause = 130,           /* ExprCaseClause  */
  YYSYMBOL_ExprSwitchCase = 131,           /* ExprSwitchCase  */
  YYSYMBOL_FallthroughStmt = 132,          /* FallthroughStmt  */
  YYSYMBOL_IfStmt = 133,                   /* IfStmt  */
  YYSYMBOL_ForStmt = 134,                  /* ForStmt  */
  YYSYMBOL_ForClause = 135,                /* ForClause  */
  YYSYMBOL_InitStmt = 136,                 /* InitStmt  */
  YYSYMBOL_PostStmt = 137,                 /* PostStmt  */
  YYSYMBOL_RangeClause = 138,              /* RangeClause  */
  YYSYMBOL_Expression = 139,               /* Expression  */
  YYSYMBOL_UnaryExpr = 140,                /* UnaryExpr  */
  YYSYMBOL_PrimaryExpr = 141,              /* PrimaryExpr  */
  YYSYMBOL_StructLiteral = 142,            /* StructLiteral  */
  YYSYMBOL_KeyValueList = 143,             /* KeyValueList  */
  YYSYMBOL_Selector = 144,                 /* Selector  */
  YYSYMBOL_Index = 145,                    /* Index  */
  YYSYMBOL_Slice = 146,                    /* Slice  */
  YYSYMBOL_MakeExpr = 147,                 /* MakeExpr  */
  YYSYMBOL_TypeAssertion = 148,            /* TypeAssertion  */
  YYSYMBOL_Arguments = 149,                /* Arguments  */
  YYSYMBOL_ExpressionList = 150,           /* ExpressionList  */
  YYSYMBOL_TypeDecl = 151,                 /* TypeDecl  */
  YYSYMBOL_TypeSpecList = 152,             /* TypeSpecList  */
  YYSYMBOL_TypeSpec = 153,                 /* TypeSpec  */
  YYSYMBOL_AliasDecl = 154,                /* AliasDecl  */
  YYSYMBOL_TypeDef = 155,                  /* TypeDef  */
  YYSYMBOL_MapType = 156,                  /* MapType  */
  YYSYMBOL_StructType = 157,               /* StructType  */
  YYSYMBOL_FieldDeclList = 158,            /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 159,                /* FieldDecl  */
  YYSYMBOL_PointerType = 160,              /* PointerType  */
  YYSYMBOL_BaseType = 161,                 /* BaseType  */
  YYSYMBOL_ArrayType = 162,                /* ArrayType  */
  YYSYMBOL_Literal = 163,                  /* Literal  */
  YYSYMBOL_BasicLit = 164,                 /* BasicLit  */
  YYSYMBOL_String = 165                    /* String  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1807

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  96
/* YYNRULES -- Number of rules.  */
#define YYNRULES  235
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  425

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   324


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    75,    75,    87,    93,    99,   107,   115,   121,   129,
     134,   138,   147,   153,   161,   167,   172,   180,   188,   196,
     205,   212,   219,   229,   239,   247,   255,   269,   276,   283,
     290,   297,   304,   311,   318,   324,   329,   336,   343,   353,
     360,   367,   378,   390,   401,   408,   418,   429,   435,   441,
     447,   453,   461,   468,   477,   485,   495,   553,   618,   624,
     636,   642,   651,   669,   693,   750,   751,   752,   756,   757,
     761,   762,   763,   767,   776,   801,   838,   844,   853,   862,
     871,   876,   883,   892,   898,   910,   935,   945,   954,   961,
     968,   974,   980,   986,   992,   997,  1006,  1012,  1021,  1027,
    1033,  1042,  1052,  1056,  1062,  1070,  1074,  1081,  1097,  1104,
    1113,  1118,  1126,  1133,  1143,  1144,  1149,  1155,  1167,  1172,
    1183,  1194,  1198,  1199,  1200,  1201,  1202,  1203,  1204,  1205,
    1209,  1210,  1213,  1217,  1218,  1222,  1226,  1227,  1228,  1229,
    1230,  1231,  1235,  1236,  1237,  1238,  1242,  1243,  1247,  1251,
    1256,  1257,  1258,  1261,  1264,  1267,  1270,  1273,  1276,  1279,
    1282,  1285,  1288,  1291,  1294,  1297,  1300,  1303,  1306,  1309,
    1312,  1315,  1318,  1325,  1336,  1347,  1358,  1369,  1380,  1392,
    1399,  1406,  1414,  1415,  1421,  1428,  1429,  1439,  1447,  1453,
    1464,  1475,  1487,  1494,  1498,  1504,  1511,  1519,  1532,  1542,
    1551,  1559,  1570,  1578,  1582,  1591,  1605,  1614,  1627,  1628,
    1632,  1633,  1637,  1638,  1642,  1646,  1650,  1666,  1677,  1689,
    1695,  1719,  1734,  1739,  1753,  1765,  1777,  1784,  1794,  1801,
    1808,  1815,  1822,  1829,  1839,  1843
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INTEGER_VAL",
  "FLOAT_VAL", "TRUE", "FALSE", "NULLPOINTER", "BREAK", "CONTINUE",
  "RETURN", "SCOLON", "FUNC", "STRUCT", "ELSE", "PACKAGE", "IF", "FOR",
  "RANGE", "IMPORT", "VAR", "SWITCH", "CASE", "NEW", "CONST", "MAP",
  "DEFAULT", "MAKE", "GOTO", "FALLTHROUGH", "TYPE", "PLUSPLUS",
  "MINUSMINUS", "ANDNOT", "ELIPSIS", "ADD", "SUB", "NOT", "XOR", "MUL",
  "AND", "OR", "LOGOR", "LOGAND", "ISEQ", "NEQ", "LESSEQ", "GRTEQ", "GRT",
  "LESS", "MOD", "QUOT", "SHL", "SHR", "EQ", "INFER_EQ", "RIGHTPARAN",
  "RIGHTBRACE", "RIGHTSQUARE", "LEFTPARAN", "LEFTBRACE", "LEFTSQUARE",
  "COLON", "DOT", "COMMA", "RAW_STRING", "INTERPRETED_STRING", "BYTE_VAL",
  "IDENTIFIER", "ASSGN_OP", "$accept", "SourceFile", "OpenBlock",
  "CloseBlock", "PackageClause", "PackageName", "ImportDeclList",
  "ImportDecl", "ImportSpecList", "ImportSpec", "ImportPath",
  "TopLevelDeclList", "TopLevelDecl", "Block", "Condition",
  "StatementList", "Statement", "Declaration", "FunctionDecl",
  "MethodDecl", "LabeledStmt", "SimpleStmt", "EmptyStmt", "ExpressionStmt",
  "IncDecStmt", "Assignment", "ShortVarDecl", "VarDecl", "VarSpecList",
  "VarSpec", "ConstDecl", "ConstSpecList", "ConstSpec", "FunctionBody",
  "Signature", "Result", "TypeList", "Parameters", "ParameterList",
  "ParameterDecl", "IdentifierList", "Receiver", "CompositeLit",
  "LiteralType", "Type", "Operand", "OperandName", "LiteralValue",
  "SliceType", "ElementList", "KeyedElement", "Key", "Element",
  "ReturnStmt", "BreakStmt", "ContinueStmt", "GotoStmt", "SwitchStmt",
  "ExprSwitchStmt", "ExprCaseClauseList", "ExprCaseClause",
  "ExprSwitchCase", "FallthroughStmt", "IfStmt", "ForStmt", "ForClause",
  "InitStmt", "PostStmt", "RangeClause", "Expression", "UnaryExpr",
  "PrimaryExpr", "StructLiteral", "KeyValueList", "Selector", "Index",
  "Slice", "MakeExpr", "TypeAssertion", "Arguments", "ExpressionList",
  "TypeDecl", "TypeSpecList", "TypeSpec", "AliasDecl", "TypeDef",
  "MapType", "StructType", "FieldDeclList", "FieldDecl", "PointerType",
  "BaseType", "ArrayType", "Literal", "BasicLit", "String", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324
};
#endif

#define YYPACT_NINF (-356)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-207)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -4,   -55,    38,    45,  -356,  -356,  -356,    64,   267,   235,
     119,   201,    35,  -356,  -356,    35,  -356,  -356,  -356,   121,
     152,   167,   204,   156,   127,   176,  -356,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,   237,   205,  -356,  -356,    92,  -356,
    -356,    66,   147,  -356,  -356,     7,    94,  -356,    27,   151,
     136,  -356,  -356,  -356,  -356,   223,  -356,  -356,   240,  -356,
    -356,   110,  -356,   270,   191,   191,   102,   241,   244,   252,
     140,   490,   233,  -356,  1185,  -356,   250,  -356,  -356,  -356,
    -356,  -356,  -356,  -356,   146,   312,  1185,   271,   168,   318,
     140,  -356,  -356,  -356,  -356,   193,  -356,   288,    26,   288,
    -356,   347,  -356,    36,   140,  -356,  -356,  -356,  -356,  -356,
    -356,   300,   306,   309,  1185,  1185,  1185,  1185,  1185,   140,
    1185,  -356,  -356,   308,  -356,   313,  1605,  -356,   282,  -356,
    -356,  -356,  -356,  -356,  1712,   305,  1185,  -356,   361,  -356,
     305,  1185,  -356,   363,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  -356,   140,  -356,  -356,  -356,  -356,  -356,   270,    95,
     364,   328,   140,   140,   178,  -356,  -356,  -356,   308,   313,
    -356,  -356,  -356,  1668,   537,  -356,  1185,  -356,  1185,  1185,
    1185,  1185,  1185,  1185,  1185,  1185,  1185,  1185,  1185,  1185,
    1185,  1185,  1185,  1185,  1185,  1185,  1185,   140,   701,   748,
     209,  -356,  -356,  -356,  -356,  -356,  1185,   305,  -356,   305,
    -356,   440,  -356,   260,  -356,    35,  -356,   365,  -356,   140,
     332,   272,  -356,  -356,  -356,  -356,   327,   253,  -356,   330,
    -356,  1509,  1534,   336,  -356,   481,   481,  -356,  -356,  -356,
     481,  1733,  1754,   311,   311,   311,   311,   311,   311,  -356,
    -356,  -356,  -356,  -356,  -356,    25,   795,  1425,   140,  -356,
    1712,   338,   339,  1185,  1232,   603,   842,   340,  -356,    18,
    -356,   374,   385,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,    72,  -356,  -356,  -356,  -356,  -356,  -356,  -356,  -356,
    -356,  1339,    -9,  -356,   140,  -356,  -356,  -356,  -356,  -356,
    1185,  -356,   652,   891,  1185,  -356,   344,  -356,  -356,  1453,
    -356,   940,   356,  -356,  -356,   305,   154,   404,  1270,  1185,
    -356,   288,  -356,   227,   288,   405,   288,  1293,   225,     0,
     407,  1316,  -356,   440,   362,   409,  -356,  1185,  -356,  -356,
    1185,  -356,  1371,  -356,  -356,  -356,  -356,  1712,  1398,  -356,
    -356,  1185,  -356,  1481,  -356,  1185,   408,  1712,  -356,   991,
    -356,  1038,  -356,  1089,  1185,  -356,  -356,     1,  -356,   359,
    1136,    80,  -356,  -356,  -356,   305,   305,  -356,  1185,  1185,
    1626,  -356,  1185,  1559,    -6,  1185,  1232,   412,  1712,  1185,
     305,  -356,  -356,   440,   107,  1582,  -356,   133,  1690,  -356,
    -356,  1647,   410,  -356,  -356,  1712,  -356,  -356,  1232,  1712,
     374,  -356,   150,   166,  -356,  -356,  -356,    -6,  -356,  -356,
    -356,   184,  -356,  -356,  -356
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     6,     5,     1,     0,     0,     0,
       0,     0,     0,   234,   235,     0,    11,    16,    17,     0,
       0,     0,     0,     0,     2,     0,    20,    21,    22,    40,
      41,    39,     8,    10,     0,     0,    15,    14,     0,     3,
      88,     0,     0,    87,    58,     0,     0,    65,     0,     0,
       0,   209,   212,   213,     7,     0,    19,     9,     0,    13,
      80,     0,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   101,     0,    96,    62,    97,    93,    95,
      90,    92,    91,    67,     0,     0,     0,    70,     0,     0,
       0,   215,    18,    12,    81,     0,    85,     4,    74,    44,
      59,     0,    61,     0,     0,   224,   223,   228,   229,   232,
     233,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   230,   227,     0,   179,    99,     0,   172,   178,   180,
      98,   226,   231,    86,   206,    64,     0,    66,     0,    69,
      72,     0,   208,     0,   211,   214,    82,    84,     3,    43,
      73,     4,     0,    75,    77,    45,    60,   218,     0,     0,
       0,     0,     0,     0,     0,   175,   176,   177,     0,    99,
     173,   174,   105,     0,     0,    89,     0,   185,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   181,   182,   183,   186,   184,     0,    63,    68,    71,
     210,    52,    42,     0,    79,   222,   217,     0,   219,     0,
       0,     0,    94,    99,   100,   102,   113,     0,   106,     0,
     108,   112,     0,     0,   159,   160,   161,   163,   153,   158,
     162,   165,   164,   166,   167,   170,   168,   169,   171,   155,
     154,   156,   157,   225,   203,     0,     0,     0,     0,   190,
     207,   116,   118,   114,    52,    52,    52,     0,   135,   101,
      36,     4,     0,    27,    28,    29,    47,    48,    49,    50,
      51,     0,    30,    31,    32,    33,    34,   121,    35,    37,
      38,    53,     0,    76,     0,   221,   220,   216,   201,   200,
       0,   103,     0,     0,     0,   187,     0,   204,   193,     0,
     191,     0,     0,   117,   119,   115,   101,     0,   206,     0,
     142,     0,   148,     0,     0,     0,     0,   206,     0,     0,
       0,   206,   120,    52,     0,     0,    26,     0,    54,    55,
       0,    78,     0,   104,   107,   113,   109,   112,   188,   205,
     192,     0,   194,     0,   202,     0,   136,   150,   144,     0,
     143,     0,   145,     0,     0,   134,   122,     0,   131,     0,
       0,     0,    46,    23,    25,    57,    56,   199,     0,     0,
       0,   195,     0,     0,     0,     0,    52,     0,    24,     0,
     133,   126,   130,    52,     0,     0,   124,     0,     0,   189,
     196,     0,   137,   139,   138,   151,   149,   146,    52,   152,
     132,   123,     0,     0,   128,   198,   197,     0,   147,   127,
     125,     0,   141,   140,   129
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -356,  -356,   277,  -145,  -356,   425,  -356,   419,  -356,    13,
     264,  -356,   406,   -96,    70,    39,  -269,    68,  -356,  -356,
    -356,  -230,  -356,  -356,  -356,  -356,  -356,  -356,  -356,   -21,
    -356,  -356,   -42,   337,   372,  -356,  -356,   428,  -356,   334,
      -5,  -356,  -356,   208,   123,   274,   -20,  -157,  -356,  -356,
     149,  -356,   155,  -356,  -356,  -356,  -356,  -356,  -356,  -327,
    -349,  -356,  -356,  -355,  -356,  -356,  -356,    44,  -356,   -71,
     239,  -356,  -356,    75,  -356,  -356,  -356,  -356,  -356,  -356,
     -67,  -356,  -356,   -35,  -356,  -356,  -356,  -356,  -356,   296,
    -356,  -356,  -356,  -356,  -356,    -3
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     2,    64,   149,     3,    15,     9,    10,    34,    16,
      17,    24,    25,   270,   321,   271,   272,   273,    27,    28,
     274,   275,   276,   277,   278,   279,   280,    29,    66,    44,
      30,    84,    47,   151,    97,   153,   213,    98,    61,    62,
     281,    41,   122,   123,   105,   124,   125,   175,    78,   227,
     228,   229,   230,   282,   283,   284,   285,   286,   287,   367,
     368,   369,   288,   289,   290,   324,   325,   407,   326,   134,
     127,   128,   177,   233,   201,   202,   203,   129,   204,   205,
     292,    31,    88,    51,    52,    53,    79,    80,   159,   160,
      81,   106,    82,   130,   131,   132
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     126,   150,   335,   150,    85,    18,   212,   135,    18,    18,
     264,     1,    18,     4,    89,    45,    48,   226,   392,   140,
      68,    67,   364,   364,    35,    77,   365,   365,    77,   404,
      77,    18,    69,    63,   317,   322,   330,    45,     6,    68,
      68,    48,   138,    77,   397,   101,    70,    58,   392,   173,
      77,    69,    69,   143,   148,   206,     7,   366,   391,   306,
     340,    45,   423,   392,   372,    70,    70,   412,    71,   207,
      77,    72,   392,   -87,   209,    73,    74,    26,    77,    48,
     333,   307,   -87,     8,    77,   152,   421,    71,    71,   206,
      63,    72,    26,   157,    73,    73,    86,   169,   158,    77,
      13,    14,   364,   231,    43,   232,   365,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   334,   337,   257,   364,
      32,   255,    77,   365,    65,   260,    72,   396,    77,    19,
     291,   335,    77,    77,   223,   226,   345,    20,    60,    68,
      83,    21,   216,    68,   158,   364,   406,    22,   100,   365,
      43,    69,    43,    43,   411,    69,    94,    54,    76,   320,
      43,    87,   364,    91,    95,    70,   365,    77,   406,    70,
      38,   107,   108,   109,   110,   309,    96,    56,   364,    39,
     414,    68,   365,   318,   327,   331,   315,    71,   328,    77,
     291,    71,   137,    69,    73,    90,   364,   419,    73,   -87,
     365,    42,   295,   145,    43,    43,    59,    70,   -87,    50,
      43,   154,   356,   420,   142,   358,    46,   161,   360,   342,
     362,   231,   347,   348,    92,    43,    50,   120,    77,    71,
     353,   424,   172,    13,    14,   121,    73,    19,   357,   146,
      38,    93,   102,    75,     8,    20,    75,    33,    75,    21,
     323,    43,   291,    49,    12,    22,    13,    14,   258,     4,
     375,    75,    50,   376,    77,   214,    36,   259,    75,    37,
     380,   215,   359,    68,   383,   220,   221,   402,   403,   206,
     388,    72,   375,    57,   363,    69,   376,   390,    75,   395,
      12,   133,    13,    14,   103,     4,    75,   398,   232,    70,
     301,   401,    75,   104,   405,   291,   293,   302,   409,   136,
     253,   422,   291,   139,   294,   168,    11,    75,   299,   144,
      12,    71,    13,    14,    72,     4,   300,   291,    73,   291,
     141,   198,   297,   199,   178,   200,   179,   180,   148,   181,
     182,   183,   184,   165,   166,   167,   170,   171,   156,   162,
      75,   193,   194,   195,   196,   163,    75,   164,   174,   206,
      75,    75,   208,   176,   210,   218,   296,   107,   108,   109,
     110,   312,   261,   262,   263,   -52,   219,    68,   298,  -111,
     264,   265,   303,   305,    20,   266,   336,   111,    21,    69,
     349,   112,   267,   268,    22,    75,   313,   314,   332,   114,
     115,   116,   354,   117,   118,   355,   361,   341,   370,   373,
     374,   393,   384,   408,   417,   211,     5,    75,    23,   147,
      55,   387,   410,   120,   148,    71,   155,    99,   222,    13,
      14,   121,   269,   107,   108,   109,   110,    40,   261,   262,
     263,   344,   418,    68,   399,   217,   264,   265,   346,     0,
      20,   266,     0,   111,    21,    69,    75,   112,   267,   268,
      22,     0,     0,     0,     0,   114,   115,   116,     0,   117,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,   108,   109,   110,     0,     0,   120,
     148,    71,    75,    68,     0,    13,    14,   121,   269,     0,
       0,     0,     0,   111,   178,    69,     0,   112,     0,   181,
     182,   183,     0,     0,   113,   114,   115,   116,     0,   117,
     118,   193,   194,   195,   196,     0,     0,     0,     0,     0,
     107,   108,   109,   110,     0,     0,     0,     0,   119,   120,
      68,    71,     0,     0,     0,    13,    14,   121,    73,     0,
     111,     0,    69,     0,   112,     0,     0,     0,     0,     0,
       0,     0,   114,   115,   116,     0,   117,   118,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,     0,   120,   174,    71,     0,
       0,     0,    13,    14,   121,    73,   107,   108,   109,   110,
       0,     0,     0,     0,     0,     0,    68,     0,     0,     0,
       0,   319,     0,     0,     0,     0,   111,     0,    69,     0,
     112,     0,     0,     0,     0,     0,     0,     0,   114,   115,
     116,     0,   117,   118,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,   108,   109,   110,     0,
       0,     0,   120,   148,    71,    68,     0,     0,    13,    14,
     121,   316,     0,     0,     0,   111,     0,    69,     0,   112,
       0,     0,     0,     0,     0,     0,     0,   114,   115,   116,
       0,   117,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,   108,   109,   110,     0,   343,
       0,   120,   174,    71,    68,     0,     0,    13,    14,   121,
      73,     0,     0,     0,   111,     0,    69,     0,   112,     0,
       0,     0,     0,     0,     0,     0,   114,   115,   116,     0,
     117,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   108,   109,   110,     0,     0,   254,     0,     0,
     120,    68,    71,     0,     0,     0,    13,    14,   121,    73,
       0,   111,     0,    69,     0,   112,     0,     0,     0,     0,
       0,     0,     0,   114,   115,   116,     0,   117,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,   108,
     109,   110,     0,     0,     0,     0,     0,   120,    68,    71,
     256,     0,     0,    13,    14,   121,    73,     0,   111,     0,
      69,     0,   112,     0,     0,     0,     0,     0,     0,     0,
     114,   115,   116,     0,   117,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,   108,   109,   110,     0,
       0,     0,     0,   308,   120,    68,    71,     0,     0,     0,
      13,    14,   121,    73,     0,   111,     0,    69,     0,   112,
       0,     0,     0,     0,     0,     0,     0,   114,   115,   116,
       0,   117,   118,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,   108,   109,   110,     0,     0,
       0,   120,   329,    71,    68,     0,     0,    13,    14,   121,
     316,     0,     0,     0,   111,     0,    69,     0,   112,     0,
       0,     0,     0,     0,     0,     0,   114,   115,   116,     0,
     117,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,   108,   109,   110,     0,     0,     0,
     120,   174,    71,    68,     0,     0,    13,    14,   121,    73,
       0,     0,     0,   111,     0,    69,     0,   112,     0,     0,
       0,     0,     0,     0,     0,   114,   115,   116,     0,   117,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   107,   108,   109,   110,   352,   120,
       0,    71,     0,     0,    68,    13,    14,   121,    73,   385,
       0,     0,     0,     0,   111,     0,    69,     0,   112,     0,
       0,     0,     0,     0,     0,     0,   114,   115,   116,     0,
     117,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   107,   108,   109,   110,     0,     0,     0,     0,   386,
     120,    68,    71,     0,     0,     0,    13,    14,   121,    73,
       0,   111,     0,    69,     0,   112,     0,     0,     0,     0,
       0,     0,     0,   114,   115,   116,     0,   117,   118,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   107,   108,   109,   110,     0,   120,     0,    71,
       0,     0,    68,    13,    14,   121,    73,   389,     0,     0,
       0,     0,   111,     0,    69,     0,   112,     0,     0,     0,
       0,     0,     0,     0,   114,   115,   116,     0,   117,   118,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   107,
     108,   109,   110,     0,     0,     0,     0,     0,   120,    68,
      71,     0,     0,     0,    13,    14,   121,    73,     0,   111,
       0,    69,     0,   112,     0,     0,     0,     0,     0,     0,
       0,   114,   115,   116,     0,   117,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   107,   108,
     109,   110,     0,     0,     0,   120,   394,    71,    68,     0,
       0,    13,    14,   121,    73,     0,     0,     0,   111,     0,
      69,     0,   112,     0,     0,     0,     0,     0,     0,     0,
     114,   115,   116,     0,   117,   118,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   107,   108,   109,   110,     0,
       0,     0,     0,     0,   120,    68,    71,     0,     0,     0,
      13,    14,   121,    73,     0,   111,     0,    69,     0,   112,
       0,     0,     0,     0,     0,     0,     0,   114,   115,   116,
       0,   117,   118,     0,     0,     0,     0,     0,     0,     0,
       0,   -53,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   120,     0,    71,     0,     0,     0,    13,    14,   121,
     316,   338,   339,   178,   -53,   179,   180,     0,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   338,   339,   178,   -53,   179,   180,
     148,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   338,   339,   178,
       0,   179,   180,   -24,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     338,   339,   178,     0,   179,   180,   371,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -206,   178,     0,   179,   180,  -206,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,     0,   377,     0,     0,
       0,   178,     0,   179,   180,   378,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,     0,     0,     0,     0,     0,     0,   178,     0,
     179,   180,   379,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,     0,
       0,     0,     0,   310,     0,     0,   178,   311,   179,   180,
       0,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,     0,     0,     0,
       0,   350,     0,     0,   178,   351,   179,   180,     0,   181,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,     0,     0,     0,     0,   381,
       0,     0,   178,   382,   179,   180,     0,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,     0,     0,     0,     0,   178,     0,   179,
     180,  -110,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,     0,     0,
       0,     0,   178,     0,   179,   180,   304,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,     0,     0,   178,     0,   179,   180,   148,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,     0,     0,   178,     0,
     179,   180,   413,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   178,
       0,   179,   180,   197,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     178,     0,   179,   180,   400,   181,   182,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   178,     0,   179,   180,   416,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,     0,   178,   224,   179,   180,     0,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,     0,   178,   415,   179,   180,     0,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   178,     0,   179,   180,
       0,   181,   182,   183,   184,     0,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   178,     0,   179,
     180,     0,   181,   182,   183,   184,     0,     0,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196
};

static const yytype_int16 yycheck[] =
{
      71,    97,   271,    99,    46,     8,   151,    74,    11,    12,
      16,    15,    15,    68,    49,    20,    21,   174,   367,    86,
      13,    42,    22,    22,    11,    45,    26,    26,    48,   384,
      50,    34,    25,    38,   264,   265,   266,    42,     0,    13,
      13,    46,    84,    63,   371,    66,    39,    34,   397,   120,
      70,    25,    25,    88,    60,    64,    11,    57,    57,    34,
      69,    66,   417,   412,   333,    39,    39,   394,    61,   136,
      90,    64,   421,    55,   141,    68,    69,     9,    98,    84,
      62,    56,    64,    19,   104,    59,   413,    61,    61,    64,
      95,    64,    24,    57,    68,    68,    69,   117,   103,   119,
      65,    66,    22,   174,    68,   176,    26,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   271,    55,   199,    22,
      11,   198,   152,    26,    68,   206,    64,    57,   158,    12,
     211,   410,   162,   163,   164,   302,   303,    20,    56,    13,
      56,    24,    57,    13,   159,    22,   386,    30,    56,    26,
      68,    25,    68,    68,    57,    25,    56,    11,    45,   265,
      68,    48,    22,    50,    64,    39,    26,   197,   408,    39,
      59,     3,     4,     5,     6,   256,    63,    11,    22,    68,
      57,    13,    26,   264,   265,   266,   263,    61,   265,   219,
     271,    61,    56,    25,    68,    69,    22,    57,    68,    55,
      26,    59,   215,    90,    68,    68,    11,    39,    64,    68,
      68,    98,   318,    57,    56,   321,    59,   104,   324,   300,
     326,   302,   303,   304,    11,    68,    68,    59,   258,    61,
     311,    57,   119,    65,    66,    67,    68,    12,   319,    56,
      59,    11,    11,    45,    19,    20,    48,    56,    50,    24,
     265,    68,   333,    59,    63,    30,    65,    66,    59,    68,
     337,    63,    68,   340,   294,   152,    12,    68,    70,    15,
     351,   158,    55,    13,   355,   162,   163,   383,   384,    64,
     361,    64,   359,    56,    69,    25,   363,   364,    90,   370,
      63,    68,    65,    66,    60,    68,    98,   378,   379,    39,
      57,   382,   104,    61,   385,   386,    56,    64,   389,    69,
     197,   417,   393,    11,    64,   117,    59,   119,    56,    11,
      63,    61,    65,    66,    64,    68,    64,   408,    68,   410,
      69,    59,   219,    61,    33,    63,    35,    36,    60,    38,
      39,    40,    41,   114,   115,   116,   117,   118,    11,    59,
     152,    50,    51,    52,    53,    59,   158,    58,    60,    64,
     162,   163,    11,    60,    11,    11,    11,     3,     4,     5,
       6,   258,     8,     9,    10,    11,    58,    13,    56,    62,
      16,    17,    62,    57,    20,    21,    11,    23,    24,    25,
      56,    27,    28,    29,    30,   197,    68,    68,    68,    35,
      36,    37,    56,    39,    40,    11,    11,   294,    11,    57,
      11,    62,    14,    11,    14,   148,     1,   219,     9,    95,
      24,   361,   393,    59,    60,    61,    99,    65,   164,    65,
      66,    67,    68,     3,     4,     5,     6,    19,     8,     9,
      10,   302,   408,    13,   379,   159,    16,    17,   303,    -1,
      20,    21,    -1,    23,    24,    25,   258,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    59,
      60,    61,   294,    13,    -1,    65,    66,    67,    68,    -1,
      -1,    -1,    -1,    23,    33,    25,    -1,    27,    -1,    38,
      39,    40,    -1,    -1,    34,    35,    36,    37,    -1,    39,
      40,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    58,    59,
      13,    61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,
      23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    59,    60,    61,    -1,
      -1,    -1,    65,    66,    67,    68,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    23,    -1,    25,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,
      37,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    59,    60,    61,    13,    -1,    -1,    65,    66,
      67,    68,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    57,
      -1,    59,    60,    61,    13,    -1,    -1,    65,    66,    67,
      68,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    56,    -1,    -1,
      59,    13,    61,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    59,    13,    61,
      62,    -1,    -1,    65,    66,    67,    68,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    58,    59,    13,    61,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    59,    60,    61,    13,    -1,    -1,    65,    66,    67,
      68,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      59,    60,    61,    13,    -1,    -1,    65,    66,    67,    68,
      -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    58,    59,
      -1,    61,    -1,    -1,    13,    65,    66,    67,    68,    18,
      -1,    -1,    -1,    -1,    23,    -1,    25,    -1,    27,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    -1,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    11,
      59,    13,    61,    -1,    -1,    -1,    65,    66,    67,    68,
      -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    59,    -1,    61,
      -1,    -1,    13,    65,    66,    67,    68,    18,    -1,    -1,
      -1,    -1,    23,    -1,    25,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    -1,    39,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    -1,    59,    13,
      61,    -1,    -1,    -1,    65,    66,    67,    68,    -1,    23,
      -1,    25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    59,    60,    61,    13,    -1,
      -1,    65,    66,    67,    68,    -1,    -1,    -1,    23,    -1,
      25,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    -1,    39,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    -1,    59,    13,    61,    -1,    -1,    -1,
      65,    66,    67,    68,    -1,    23,    -1,    25,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      -1,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    61,    -1,    -1,    -1,    65,    66,    67,
      68,    31,    32,    33,    11,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    31,    32,    33,    11,    35,    36,
      60,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    31,    32,    33,
      -1,    35,    36,    60,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      31,    32,    33,    -1,    35,    36,    60,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    33,    -1,    35,    36,    69,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    56,    -1,    -1,
      -1,    33,    -1,    35,    36,    64,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,
      35,    36,    64,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    58,    -1,    -1,    33,    62,    35,    36,
      -1,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    33,    62,    35,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    58,
      -1,    -1,    33,    62,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    33,    -1,    35,
      36,    62,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,    33,    -1,    35,    36,    62,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    -1,    33,    -1,    35,    36,    60,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    33,    -1,
      35,    36,    60,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    33,
      -1,    35,    36,    58,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      33,    -1,    35,    36,    58,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    33,    -1,    35,    36,    58,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    33,    56,    35,    36,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    33,    56,    35,    36,    -1,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    33,    -1,    35,    36,
      -1,    38,    39,    40,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    33,    -1,    35,
      36,    -1,    38,    39,    40,    41,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    71,    74,    68,    75,     0,    11,    19,    76,
      77,    59,    63,    65,    66,    75,    79,    80,   165,    12,
      20,    24,    30,    77,    81,    82,    87,    88,    89,    97,
     100,   151,    11,    56,    78,    79,    80,    80,    59,    68,
     107,   111,    59,    68,    99,   110,    59,   102,   110,    59,
      68,   153,   154,   155,    11,    82,    11,    56,    79,    11,
      56,   108,   109,   110,    72,    68,    98,    99,    13,    25,
      39,    61,    64,    68,    69,   113,   114,   116,   118,   156,
     157,   160,   162,    56,   101,   102,    69,   114,   152,   153,
      69,   114,    11,    11,    56,    64,   114,   104,   107,   104,
      56,    99,    11,    60,    61,   114,   161,     3,     4,     5,
       6,    23,    27,    34,    35,    36,    37,    39,    40,    58,
      59,    67,   112,   113,   115,   116,   139,   140,   141,   147,
     163,   164,   165,    68,   139,   150,    69,    56,   102,    11,
     150,    69,    56,   153,    11,   114,    56,   109,    60,    73,
      83,   103,    59,   105,   114,   103,    11,    57,   110,   158,
     159,   114,    59,    59,    58,   140,   140,   140,   113,   116,
     140,   140,   114,   139,    60,   117,    60,   142,    33,    35,
      36,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    58,    59,    61,
      63,   144,   145,   146,   148,   149,    64,   150,    11,   150,
      11,    72,    73,   106,   114,   114,    57,   159,    11,    58,
     114,   114,   115,   116,    56,    57,   117,   119,   120,   121,
     122,   139,   139,   143,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   114,    56,   150,    62,   139,    59,    68,
     139,     8,     9,    10,    16,    17,    21,    28,    29,    68,
      83,    85,    86,    87,    90,    91,    92,    93,    94,    95,
      96,   110,   123,   124,   125,   126,   127,   128,   132,   133,
     134,   139,   150,    56,    64,   165,    11,   114,    56,    56,
      64,    57,    64,    62,    62,    57,    34,    56,    58,   139,
      58,    62,   114,    68,    68,   150,    68,    91,   139,    18,
      83,    84,    91,   110,   135,   136,   138,   139,   150,    60,
      91,   139,    68,    62,    73,    86,    11,    55,    31,    32,
      69,   114,   139,    57,   120,   117,   122,   139,   139,    56,
      58,    62,    58,   139,    56,    11,    83,   139,    83,    55,
      83,    11,    83,    69,    22,    26,    57,   129,   130,   131,
      11,    60,    86,    57,    11,   150,   150,    56,    64,    64,
     139,    58,    62,   139,    14,    18,    11,    84,   139,    18,
     150,    57,   130,    62,    60,   139,    57,   129,   139,   143,
      58,   139,    83,    83,   133,   139,    91,   137,    11,   139,
      85,    57,   129,    60,    57,    56,    58,    14,   137,    57,
      57,   129,    83,   133,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    71,    72,    73,    74,    75,    76,    76,    77,
      77,    77,    78,    78,    79,    79,    79,    80,    81,    81,
      82,    82,    82,    83,    84,    85,    85,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    87,    88,    88,    89,    89,    90,    91,    91,    91,
      91,    91,    92,    93,    94,    94,    95,    96,    97,    97,
      98,    98,    99,    99,    99,   100,   100,   100,   101,   101,
     102,   102,   102,   103,   104,   104,   105,   105,   106,   106,
     107,   107,   107,   108,   108,   109,   110,   110,   111,   112,
     113,   113,   113,   113,   113,   113,   114,   114,   115,   115,
     115,   116,   117,   117,   117,   118,   119,   119,   120,   120,
     121,   121,   122,   122,   123,   123,   124,   124,   125,   125,
     126,   127,   128,   128,   128,   128,   128,   128,   128,   128,
     129,   129,   130,   131,   131,   132,   133,   133,   133,   133,
     133,   133,   134,   134,   134,   134,   135,   135,   136,   137,
     138,   138,   138,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   140,   140,   140,   140,   140,   140,   141,
     141,   141,   141,   141,   141,   141,   141,   142,   143,   143,
     144,   145,   146,   146,   146,   146,   146,   146,   147,   147,
     147,   147,   148,   149,   149,   149,   150,   150,   151,   151,
     152,   152,   153,   153,   154,   155,   156,   157,   157,   158,
     158,   159,   159,   160,   161,   162,   163,   163,   164,   164,
     164,   164,   164,   164,   165,   165
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     0,     0,     2,     1,     3,     2,     4,
       3,     2,     3,     2,     2,     2,     1,     1,     3,     2,
       1,     1,     1,     5,     1,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     5,     4,     5,     3,     1,     1,     1,
       1,     1,     0,     1,     2,     2,     3,     3,     2,     4,
       3,     2,     2,     4,     3,     2,     4,     3,     3,     2,
       2,     4,     3,     1,     1,     2,     3,     1,     3,     1,
       2,     3,     4,     1,     3,     2,     3,     1,     1,     2,
       1,     1,     1,     1,     4,     1,     1,     1,     1,     1,
       3,     1,     2,     3,     4,     3,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     2,
       2,     1,     3,     5,     4,     6,     4,     6,     5,     7,
       2,     1,     3,     2,     1,     1,     3,     5,     5,     5,
       7,     7,     2,     3,     3,     3,     4,     5,     1,     1,
       2,     4,     4,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     2,     2,     2,     2,     2,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     3,     3,     5,
       2,     3,     4,     3,     4,     5,     6,     7,     8,     6,
       4,     4,     4,     2,     3,     4,     1,     3,     4,     2,
       3,     2,     1,     1,     3,     2,     5,     4,     3,     2,
       3,     3,     2,     2,     1,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* SourceFile: PackageClause SCOLON ImportDeclList TopLevelDeclList  */
#line 75 "src/parser.y"
                                                             {
			 Node* curr = new Node("SourceFile");
			 curr->add_non_terminal_children((yyvsp[-3].nt));
			 curr->add_non_terminal_children((yyvsp[-1].nt));
			 curr->add_non_terminal_children((yyvsp[0].nt));
			 curr->current_node_data = new NodeData("SourceFile");
			 curr->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
			 (yyval.nt) = curr;
			}
#line 2133 "parser.tab.c"
    break;

  case 3: /* OpenBlock: %empty  */
#line 87 "src/parser.y"
        {
		st->enter_new_scope();
	}
#line 2141 "parser.tab.c"
    break;

  case 4: /* CloseBlock: %empty  */
#line 93 "src/parser.y"
        {
		st->exit_latest_scope();
	}
#line 2149 "parser.tab.c"
    break;

  case 5: /* PackageClause: PACKAGE PackageName  */
#line 99 "src/parser.y"
                            {
		Node* curr = new Node("PackageClause");
		curr -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2159 "parser.tab.c"
    break;

  case 6: /* PackageName: IDENTIFIER  */
#line 107 "src/parser.y"
                   {
		Node* curr = new Node("PackageName");
		curr -> add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 2169 "parser.tab.c"
    break;

  case 7: /* ImportDeclList: ImportDeclList ImportDecl SCOLON  */
#line 115 "src/parser.y"
                                         {
		Node* curr = new Node("ImportDeclList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2180 "parser.tab.c"
    break;

  case 8: /* ImportDeclList: ImportDecl SCOLON  */
#line 121 "src/parser.y"
                            {
		Node* curr = new Node("ImportDeclList");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2190 "parser.tab.c"
    break;

  case 9: /* ImportDecl: IMPORT LEFTPARAN ImportSpecList RIGHTPARAN  */
#line 129 "src/parser.y"
                                                   {
		Node* curr = new Node("ImportDecl");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2200 "parser.tab.c"
    break;

  case 10: /* ImportDecl: IMPORT LEFTPARAN RIGHTPARAN  */
#line 134 "src/parser.y"
                                      {
		Node* curr = new Node("ImportDecl");
		(yyval.nt) = curr;
	}
#line 2209 "parser.tab.c"
    break;

  case 11: /* ImportDecl: IMPORT ImportSpec  */
#line 138 "src/parser.y"
                            {
		Node* curr = new Node("ImportDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2219 "parser.tab.c"
    break;

  case 12: /* ImportSpecList: ImportSpecList ImportSpec SCOLON  */
#line 147 "src/parser.y"
                                         {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2230 "parser.tab.c"
    break;

  case 13: /* ImportSpecList: ImportSpec SCOLON  */
#line 153 "src/parser.y"
                            {
		Node* curr = new Node("ImportSpecList");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 2240 "parser.tab.c"
    break;

  case 14: /* ImportSpec: PackageName ImportPath  */
#line 161 "src/parser.y"
                               {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2251 "parser.tab.c"
    break;

  case 15: /* ImportSpec: DOT ImportPath  */
#line 167 "src/parser.y"
                         {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2261 "parser.tab.c"
    break;

  case 16: /* ImportSpec: ImportPath  */
#line 172 "src/parser.y"
                     {
		Node* curr = new Node("ImportSpec");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2271 "parser.tab.c"
    break;

  case 17: /* ImportPath: String  */
#line 180 "src/parser.y"
               {
		Node* curr = new Node("ImportPath");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2281 "parser.tab.c"
    break;

  case 18: /* TopLevelDeclList: TopLevelDeclList TopLevelDecl SCOLON  */
#line 188 "src/parser.y"
                                              {
		Node* curr = new Node("TopLevelDeclList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->current_node_data = (yyvsp[-2].nt) -> current_node_data;
		(curr->last_current_node_data())->next_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2294 "parser.tab.c"
    break;

  case 19: /* TopLevelDeclList: TopLevelDecl SCOLON  */
#line 196 "src/parser.y"
                              {
		Node* curr = new Node("TopLevelDeclList");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2305 "parser.tab.c"
    break;

  case 20: /* TopLevelDecl: Declaration  */
#line 205 "src/parser.y"
                    {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2317 "parser.tab.c"
    break;

  case 21: /* TopLevelDecl: FunctionDecl  */
#line 212 "src/parser.y"
                       {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2329 "parser.tab.c"
    break;

  case 22: /* TopLevelDecl: MethodDecl  */
#line 219 "src/parser.y"
                     {
		Node* curr = new Node("TopLevelDecl");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2341 "parser.tab.c"
    break;

  case 23: /* Block: LEFTBRACE OpenBlock StatementList CloseBlock RIGHTBRACE  */
#line 229 "src/parser.y"
                                                            {
    	Node* curr = new Node("Block");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->current_type = (yyvsp[-2].nt)->current_type;
		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt) = curr;
    }
#line 2353 "parser.tab.c"
    break;

  case 24: /* Condition: Expression  */
#line 239 "src/parser.y"
                   {
		Node* curr = new Node("Condition");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2363 "parser.tab.c"
    break;

  case 25: /* StatementList: StatementList Statement SCOLON  */
#line 247 "src/parser.y"
                                       {
		Node* curr = new Node("StatementList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		((yyval.nt)->current_node_data->last_next_child())->next_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2376 "parser.tab.c"
    break;

  case 26: /* StatementList: Statement SCOLON  */
#line 255 "src/parser.y"
                           {
		Node* curr = new Node("StatementList");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)->current_node_data = new NodeData("list");
		if(!(yyvsp[-1].nt)->current_node_data){
			cout<<"NO AST found here! Exiting........";
			exit(1);
		}
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
	}
#line 2392 "parser.tab.c"
    break;

  case 27: /* Statement: Declaration  */
#line 269 "src/parser.y"
                    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2404 "parser.tab.c"
    break;

  case 28: /* Statement: LabeledStmt  */
#line 276 "src/parser.y"
                      {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2416 "parser.tab.c"
    break;

  case 29: /* Statement: SimpleStmt  */
#line 283 "src/parser.y"
                     {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2428 "parser.tab.c"
    break;

  case 30: /* Statement: ReturnStmt  */
#line 290 "src/parser.y"
                    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2440 "parser.tab.c"
    break;

  case 31: /* Statement: BreakStmt  */
#line 297 "src/parser.y"
                    {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2452 "parser.tab.c"
    break;

  case 32: /* Statement: ContinueStmt  */
#line 304 "src/parser.y"
                       {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2464 "parser.tab.c"
    break;

  case 33: /* Statement: GotoStmt  */
#line 311 "src/parser.y"
                   {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2476 "parser.tab.c"
    break;

  case 34: /* Statement: SwitchStmt  */
#line 318 "src/parser.y"
                     {
		// Might change - tpbe done by shubh
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2487 "parser.tab.c"
    break;

  case 35: /* Statement: FallthroughStmt  */
#line 324 "src/parser.y"
                          {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 2497 "parser.tab.c"
    break;

  case 36: /* Statement: Block  */
#line 329 "src/parser.y"
                {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2509 "parser.tab.c"
    break;

  case 37: /* Statement: IfStmt  */
#line 336 "src/parser.y"
                 {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2521 "parser.tab.c"
    break;

  case 38: /* Statement: ForStmt  */
#line 343 "src/parser.y"
                  {
		Node* curr = new Node("Statement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2533 "parser.tab.c"
    break;

  case 39: /* Declaration: TypeDecl  */
#line 353 "src/parser.y"
                 {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2545 "parser.tab.c"
    break;

  case 40: /* Declaration: VarDecl  */
#line 360 "src/parser.y"
                  {
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2557 "parser.tab.c"
    break;

  case 41: /* Declaration: ConstDecl  */
#line 367 "src/parser.y"
                     {
		// might change
		Node* curr = new Node("Declaration");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
	}
#line 2570 "parser.tab.c"
    break;

  case 42: /* FunctionDecl: FUNC IDENTIFIER OpenBlock Signature FunctionBody CloseBlock  */
#line 378 "src/parser.y"
                                                                    {
		st->add_in_symbol_table({st->get_current_scope(),string((yyvsp[-4].sval))},(yyvsp[-2].nt)->current_type);

		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		(yyval.nt)-> current_node_data = new NodeData("Function" + string((yyvsp[-4].sval)));
		(yyval.nt)-> current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;

	}
#line 2587 "parser.tab.c"
    break;

  case 43: /* FunctionDecl: FUNC IDENTIFIER OpenBlock Signature CloseBlock  */
#line 390 "src/parser.y"
                                                          {
		Node* curr = new Node("FunctionDecl");
		curr->add_terminal_children(string((yyvsp[-3].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
		st->add_in_symbol_table({st->get_current_scope(),string((yyvsp[-3].sval))},(yyvsp[-1].nt)->current_type);
		(yyval.nt)->current_node_data = new NodeData("Function"+ string((yyvsp[-3].sval)));
	}
#line 2600 "parser.tab.c"
    break;

  case 44: /* MethodDecl: FUNC Receiver IDENTIFIER Signature  */
#line 401 "src/parser.y"
                                           {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)=curr;
	}
#line 2612 "parser.tab.c"
    break;

  case 45: /* MethodDecl: FUNC Receiver IDENTIFIER Signature FunctionBody  */
#line 408 "src/parser.y"
                                                          {
		Node *curr = new Node("MethodDecl");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)=curr;
	}
#line 2624 "parser.tab.c"
    break;

  case 46: /* LabeledStmt: IDENTIFIER COLON Statement  */
#line 418 "src/parser.y"
                                  {
		(yyval.nt) = new Node("LabeledStmt");
		(yyval.nt)->add_terminal_children(string((yyvsp[-2].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = new NodeData("label-" + string((yyvsp[-2].sval)));
		(yyval.nt)->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
	}
#line 2636 "parser.tab.c"
    break;

  case 47: /* SimpleStmt: EmptyStmt  */
#line 429 "src/parser.y"
                  {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2647 "parser.tab.c"
    break;

  case 48: /* SimpleStmt: ExpressionStmt  */
#line 435 "src/parser.y"
                         {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2658 "parser.tab.c"
    break;

  case 49: /* SimpleStmt: IncDecStmt  */
#line 441 "src/parser.y"
                     {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2669 "parser.tab.c"
    break;

  case 50: /* SimpleStmt: Assignment  */
#line 447 "src/parser.y"
                     {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2680 "parser.tab.c"
    break;

  case 51: /* SimpleStmt: ShortVarDecl  */
#line 453 "src/parser.y"
                       {
		(yyval.nt) = new Node("SimpleStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2691 "parser.tab.c"
    break;

  case 52: /* EmptyStmt: %empty  */
#line 461 "src/parser.y"
          {
		(yyval.nt) = new Node("EmptyStmt");
		(yyval.nt)->current_node_data = new NodeData("");
	}
#line 2700 "parser.tab.c"
    break;

  case 53: /* ExpressionStmt: Expression  */
#line 468 "src/parser.y"
                   {
		(yyval.nt) = new Node("ExpressionStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2711 "parser.tab.c"
    break;

  case 54: /* IncDecStmt: Expression PLUSPLUS  */
#line 477 "src/parser.y"
                            {
		(yyval.nt) = new Node("IncDecStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)) + "unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;

	}
#line 2724 "parser.tab.c"
    break;

  case 55: /* IncDecStmt: Expression MINUSMINUS  */
#line 485 "src/parser.y"
                                {
		(yyval.nt) = new Node("IncDecStmt");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)) + "unary");
		(yyval.nt)->current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
	}
#line 2736 "parser.tab.c"
    break;

  case 56: /* Assignment: ExpressionList ASSGN_OP ExpressionList  */
#line 495 "src/parser.y"
                                               {
		(yyval.nt) = new Node("Assignment");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[-1].sval)));
		DataType* left_type = (yyvsp[-2].nt)->current_type;
		DataType* right_type = (yyvsp[0].nt)->current_type;

		NodeData* left_data = (yyvsp[-2].nt)->current_node_data;
		NodeData* right_data = (yyvsp[-2].nt)->current_node_data;

		while(left_data || right_type){
			if(!left_data || !right_type){
				cout<<"[unpacking error], '=' operator expected same number of operands on LHS and RHS";
				exit(1);
			}
			string name = left_data->data_name;
			if(!left_data->value && left_data->node_child){
				cout<<"[]"<<"Unexpected non identifier on the left of '=' operator";
				exit(1);
			}

			if(left_data -> value){
				name = (left_data->node_child)? left_data->node_child->data_name:left_data->data_name;
			}

			if(right_type && right_type->getDataType() == "undefined"){
				cout<<"[Undeclared Identifier]"<<"Identifier in RHS undeclared"<<endl;
				exit(1);
			}

			if(!st->get_type(name)){
				cout<<"[Undeclared Identifier]"<<name<<" not declared yet!";
				exit(1);
			}
			else{
				if(left_type->getDataType() != right_type->getDataType()){
					cout<<"[Type Mismatch]"<<name<<" Expected type ( " <<left_type->getDataType()<<" ) whereas found ( "<<right_type->getDataType()<<" ) \n";
					exit(1);
				}
			}
			left_data = left_data->next_data;
			left_type = left_type->next_type;
			right_type = right_type->next_type;
			right_data = right_data?right_data->next_data:right_data;
		}

		NodeData* parLeft = new NodeData("list");
		NodeData* parRight = new NodeData("list");
		parLeft->node_child = (yyvsp[-2].nt)->current_node_data;
		parRight->node_child = (yyvsp[0].nt)->current_node_data;
		parLeft->next_data = parRight;
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		(yyval.nt)->current_node_data->node_child = parLeft;
	}
#line 2796 "parser.tab.c"
    break;

  case 57: /* ShortVarDecl: IdentifierList INFER_EQ ExpressionList  */
#line 553 "src/parser.y"
                                               {
		(yyval.nt) = new Node("ShortVarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));

		NodeData* left_data = (yyvsp[-2].nt)->current_node_data;
		NodeData* right_data = (yyvsp[0].nt)->current_node_data;

		DataType* left_type = (yyvsp[-2].nt)->current_type;
		DataType* right_type = (yyvsp[0].nt)->current_type;

		bool newVar = false;

		while(left_data || right_type){
			if(!left_data || !right_type){
				cout<<"[unpacking error], '=' operator expected same number of operands on LHS and RHS";
				exit(1);
			}

			string name = left_data->data_name;
			if(!left_data->value && left_data->node_child){
				cout<<"[]"<<"Unexpected non identifier on the left of '=' operator";
				exit(1);
			}

			if(left_data -> value){
				name = (left_data->node_child)? left_data->node_child->data_name:left_data->data_name;
			}

			if(right_type && right_type->getDataType() == "undefined"){
				cout<<"[Undeclared Identifier]"<<"Identifier in RHS undeclared"<<endl;
				exit(1);
			}

			if(st->scope_level(name)==0){
				if(st->get_type(name) -> getDataType() != right_type->getDataType()){
					cout<<"[Type Mismatch]"<<name<<" has different types on LHS and RHS";
					exit(1);
				}
			}
			else{
				newVar = true;
				st->add_in_symbol_table({st->get_current_scope(),name}, right_type);
			}

			left_data = left_data -> next_data;
			right_type = right_type->next_type;
			right_data = right_data? right_data->next_data:right_data;
		}
		if(!newVar){
			cout<<"No new variables found to left of :="<<endl;
			exit(1);
		}
		NodeData* parLeft = new NodeData("list");
		NodeData* parRight = new NodeData("list");
		parLeft->node_child = (yyvsp[-2].nt)->current_node_data;
		parRight->node_child = (yyvsp[0].nt)->current_node_data;
		parLeft->next_data = parRight;
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		(yyval.nt)->current_node_data->node_child = parLeft;

	}
#line 2863 "parser.tab.c"
    break;

  case 58: /* VarDecl: VAR VarSpec  */
#line 618 "src/parser.y"
                    {
		(yyval.nt) = new Node("VarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 2874 "parser.tab.c"
    break;

  case 59: /* VarDecl: VAR LEFTPARAN VarSpecList RIGHTPARAN  */
#line 624 "src/parser.y"
                                               {
		// Might change
		(yyval.nt) = new Node("VarDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2886 "parser.tab.c"
    break;

  case 60: /* VarSpecList: VarSpecList VarSpec SCOLON  */
#line 636 "src/parser.y"
                                   {
		(yyval.nt) = new Node("VarSpecList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2897 "parser.tab.c"
    break;

  case 61: /* VarSpecList: VarSpec SCOLON  */
#line 642 "src/parser.y"
                         {
		(yyval.nt) = new Node("VarSpecList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 2908 "parser.tab.c"
    break;

  case 62: /* VarSpec: IdentifierList Type  */
#line 651 "src/parser.y"
                            {
		(yyval.nt) = new Node("VarSpec");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));

		NodeData *curr = (yyvsp[-1].nt)->current_node_data;
		while(curr){
			if(st->scope_level(curr->data_name)==0){
				cout<<"("<<curr->data_name<<") is already declared in this scope!";
				exit(1);
			}
			st->add_in_symbol_table({st->get_current_scope(),curr->data_name},(yyvsp[0].nt)->current_type);
			(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
			curr = curr->next_data;
		}

		(yyval.nt)->current_node_data = new NodeData("");
	}
#line 2931 "parser.tab.c"
    break;

  case 63: /* VarSpec: IdentifierList Type ASSGN_OP ExpressionList  */
#line 669 "src/parser.y"
                                                      {
		(yyval.nt) = new Node("VarSpec");
		(yyval.nt)->add_non_terminal_children((yyvsp[-3].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));

		NodeData *curr = (yyvsp[-3].nt)->current_node_data;
		while(curr){
			if(!st->scope_level(curr->data_name)){
				cout<<curr->data_name<<" already declared in this scope!";
				exit(1);
			}
			st->add_in_symbol_table({st->get_current_scope(),curr->data_name},(yyvsp[-2].nt)->current_type);
			(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
			curr = curr->next_data;
		}
		NodeData* parLeft = new NodeData("list");
		NodeData* parRight = new NodeData("list");
		parLeft->node_child = (yyvsp[-3].nt)->current_node_data;
		parRight -> node_child = (yyvsp[0].nt)->current_node_data;
		parLeft -> next_data = parRight;
		(yyval.nt)->current_node_data = new NodeData("=");
		(yyval.nt)->current_node_data->node_child = parLeft;
	}
#line 2960 "parser.tab.c"
    break;

  case 64: /* VarSpec: IdentifierList ASSGN_OP ExpressionList  */
#line 693 "src/parser.y"
                                                 {
		(yyval.nt) = new Node("VarSpec");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));

		NodeData* left_data = (yyvsp[-2].nt)->current_node_data;
		NodeData* right_data = (yyvsp[0].nt)->current_node_data;

		DataType* left_type = (yyvsp[-2].nt)->current_type;
		DataType* right_type = (yyvsp[0].nt)->current_type;

		bool newVar = false;
		while(left_data || right_type || right_data){
			if(!left_data || !right_type || !right_data){
				//cout<<":= must have equal number of operands in LHS and RHS"<<endl;
				cout<<"[unpacking error], '=' operator expected same number of operands on LHS and RHS";

				exit(1);
			}

			string name = left_data->data_name;
			if(left_data->node_child){
				//cout<<"Non identifier to the left of :=";
				cout<<"[]"<<"Unexpected non identifier on the left of '=' operator";
				exit(1);
			}

			if(right_type && right_type->getDataType() == "undefined"){
				//cout<<"Identifier in RHS not yet declared"<<endl;
				cout<<"[Undeclared Identifier]"<<"Identifier in RHS undeclared"<<endl;
				exit(1);
			}

			if(!st->scope_level(name)){
				cout<<"Redeclaration of variable: "<<name<<endl;
				exit(1);
			}
			else{
				st->add_in_symbol_table({st->get_current_scope(),name}, right_type);
			}

			left_data = left_data -> next_data;
			right_type = right_type -> next_type;
			right_data = right_data? right_data->next_data : right_data;
		}
		NodeData* parLeft = new NodeData("list");
		NodeData* parRight = new NodeData("list");
		parLeft->node_child = (yyvsp[-2].nt)->current_node_data;
		parRight -> node_child = (yyvsp[0].nt)->current_node_data;
		parLeft -> next_data = parRight;
		(yyval.nt)->current_node_data = new NodeData(":=");
		(yyval.nt)->current_node_data->node_child = parLeft;

	}
#line 3019 "parser.tab.c"
    break;

  case 65: /* ConstDecl: CONST ConstSpec  */
#line 750 "src/parser.y"
                        {;}
#line 3025 "parser.tab.c"
    break;

  case 66: /* ConstDecl: CONST LEFTPARAN ConstSpecList RIGHTPARAN  */
#line 751 "src/parser.y"
                                                   {;}
#line 3031 "parser.tab.c"
    break;

  case 67: /* ConstDecl: CONST LEFTPARAN RIGHTPARAN  */
#line 752 "src/parser.y"
                                     {;}
#line 3037 "parser.tab.c"
    break;

  case 73: /* FunctionBody: Block  */
#line 767 "src/parser.y"
              {
		(yyval.nt) = new Node("FunctionBody");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) -> current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) -> current_node_data = (yyvsp[0].nt)->current_node_data;
	}
#line 3048 "parser.tab.c"
    break;

  case 74: /* Signature: Parameters  */
#line 776 "src/parser.y"
                   {
		(yyval.nt) = new Node("Signature");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) -> current_node_data = new NodeData("params");
		(yyval.nt) -> current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) -> current_node_data -> next_data = new NodeData("return");
		(yyval.nt) -> current_node_data -> next_data -> node_child = NULL;

		vector<DataType *> arguments;
		vector<DataType *> return_types;

		DataType* curr = (yyvsp[0].nt) -> current_type;
		NodeData* dcurr = (yyvsp[0].nt) -> current_node_data;

		while(curr){
			DataType* temp = curr->copyClass();
			temp -> next_type = NULL;
			arguments.push_back(temp);

			curr = curr->next_type;
			dcurr = dcurr -> next_data;
		}
		(yyval.nt) -> current_type = new FunctionType(arguments,return_types);

	}
#line 3078 "parser.tab.c"
    break;

  case 75: /* Signature: Parameters Result  */
#line 801 "src/parser.y"
                            {
		(yyval.nt) = new Node("Signature");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) -> current_node_data = new NodeData("params");
		(yyval.nt) -> current_node_data->node_child = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt) -> current_node_data -> next_data = new NodeData("return");
		(yyval.nt) -> current_node_data -> next_data -> node_child = NULL;

		vector<DataType *> arguments;
		vector<DataType *> return_types;

		DataType* curr = (yyvsp[-1].nt) -> current_type;
		NodeData* dcurr = (yyvsp[-1].nt) -> current_node_data;

		while(curr){
			DataType* temp = curr->copyClass();
			temp -> next_type = NULL;
			arguments.push_back(temp);

			curr = curr->next_type;
			dcurr = dcurr -> next_data;
		}

		curr = (yyvsp[0].nt)->current_type;
		while(curr){
			DataType *temp = curr->copyClass();
			temp->next_type = NULL;
			return_types.push_back(temp);
			curr=curr->next_type;
		}

		(yyval.nt) -> current_type = new FunctionType(arguments,return_types);
	}
#line 3117 "parser.tab.c"
    break;

  case 76: /* Result: LEFTPARAN TypeList RIGHTPARAN  */
#line 838 "src/parser.y"
                                      {
		(yyval.nt) = new Node("Result");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
	}
#line 3128 "parser.tab.c"
    break;

  case 77: /* Result: Type  */
#line 844 "src/parser.y"
               {
		(yyval.nt) = new Node("Result");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3139 "parser.tab.c"
    break;

  case 78: /* TypeList: TypeList COMMA Type  */
#line 853 "src/parser.y"
                        {
        (yyval.nt) = new Node("TypeList");
        (yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
        (yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
        (yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
        (yyval.nt)->current_node_data->next_data = (yyvsp[0].nt)->current_node_data;
        (yyval.nt)->current_type->next_type = (yyvsp[0].nt)->current_type;
    }
#line 3153 "parser.tab.c"
    break;

  case 79: /* TypeList: Type  */
#line 862 "src/parser.y"
           {
        (yyval.nt) = new Node("TypeList");
        (yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
        (yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
    }
#line 3164 "parser.tab.c"
    break;

  case 80: /* Parameters: LEFTPARAN RIGHTPARAN  */
#line 871 "src/parser.y"
                             {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->current_node_data = NULL;
		(yyval.nt)-> current_type = NULL;
	}
#line 3174 "parser.tab.c"
    break;

  case 81: /* Parameters: LEFTPARAN ParameterList RIGHTPARAN  */
#line 876 "src/parser.y"
                                             {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-1].nt)->current_type;

	}
#line 3186 "parser.tab.c"
    break;

  case 82: /* Parameters: LEFTPARAN ParameterList COMMA RIGHTPARAN  */
#line 883 "src/parser.y"
                                                   {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-2].nt)->current_type;
	}
#line 3197 "parser.tab.c"
    break;

  case 83: /* ParameterList: ParameterDecl  */
#line 892 "src/parser.y"
                      {
		(yyval.nt) = new Node("ParameterList");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[0].nt)->current_type;
	}
#line 3208 "parser.tab.c"
    break;

  case 84: /* ParameterList: ParameterList COMMA ParameterDecl  */
#line 898 "src/parser.y"
                                           {
		(yyval.nt) = new Node("Parameters");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
		(yyval.nt)-> current_type = (yyvsp[-2].nt)->current_type;
		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[0].nt)->current_node_data;
		((yyval.nt)->last_current_type())->next_type = (yyvsp[0].nt)->current_type;
	}
#line 3222 "parser.tab.c"
    break;

  case 85: /* ParameterDecl: IdentifierList Type  */
#line 910 "src/parser.y"
                            {
		(yyval.nt) = new Node("ParameterDecl");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		NodeData *data = (yyvsp[-1].nt) -> current_node_data;
		DataType *type = (yyvsp[0].nt) -> current_type -> copyClass();
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type->copyClass();
		(yyval.nt)->current_node_data = data;

		while(data){
			if(!st->scope_level(data->data_name)){
				cout<<data->data_name<<" is already declared in this scope";
				exit(1);
			}
			st->add_in_symbol_table({st->get_current_scope(),data->data_name}, (yyvsp[0].nt)->current_type);
			type->next_type = (data->next_data)? type->copyClass(): NULL;
			type = type->next_type;
			data = data->next_data;
		}
	}
#line 3247 "parser.tab.c"
    break;

  case 86: /* IdentifierList: IdentifierList COMMA IDENTIFIER  */
#line 935 "src/parser.y"
                                        {
		(yyval.nt) = new Node("IdentifierList");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
        ((yyvsp[-2].nt)->last_current_node_data())->next_data = new NodeData(string((yyvsp[0].sval)));
        ((yyvsp[-2].nt)->last_current_type())->next_type = (st->get_type(string((yyvsp[0].sval))))?(st->get_type(string((yyvsp[0].sval)))):(new BasicType("undefined"));

        (yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
        (yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
	}
#line 3262 "parser.tab.c"
    break;

  case 87: /* IdentifierList: IDENTIFIER  */
#line 945 "src/parser.y"
                     {
		(yyval.nt) = new Node("IdentifierList");
		(yyval.nt) -> add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt)->current_type = (st->get_type(string((yyvsp[0].sval))))?(st->get_type(string((yyvsp[0].sval)))):(new BasicType("undefined"));
	}
#line 3273 "parser.tab.c"
    break;

  case 88: /* Receiver: Parameters  */
#line 954 "src/parser.y"
                   {
		(yyval.nt) = new Node("Receiver");
		(yyval.nt) -> add_non_terminal_children((yyvsp[0].nt));
	}
#line 3282 "parser.tab.c"
    break;

  case 89: /* CompositeLit: LiteralType LiteralValue  */
#line 961 "src/parser.y"
                                 {
        (yyval.nt) = new Node("CompositeLit");

    }
#line 3291 "parser.tab.c"
    break;

  case 90: /* LiteralType: StructType  */
#line 968 "src/parser.y"
                   {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3302 "parser.tab.c"
    break;

  case 91: /* LiteralType: ArrayType  */
#line 974 "src/parser.y"
                    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3313 "parser.tab.c"
    break;

  case 92: /* LiteralType: PointerType  */
#line 980 "src/parser.y"
                      {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3324 "parser.tab.c"
    break;

  case 93: /* LiteralType: SliceType  */
#line 986 "src/parser.y"
                    {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3335 "parser.tab.c"
    break;

  case 94: /* LiteralType: LEFTSQUARE ELIPSIS RIGHTSQUARE Operand  */
#line 992 "src/parser.y"
                                                 {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_terminal_children(string((yyvsp[-2].sval)));
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
	}
#line 3345 "parser.tab.c"
    break;

  case 95: /* LiteralType: MapType  */
#line 997 "src/parser.y"
                  {
		(yyval.nt) = new Node("LiteralType");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3356 "parser.tab.c"
    break;

  case 96: /* Type: LiteralType  */
#line 1006 "src/parser.y"
                    {
		(yyval.nt) = new Node("Type");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
	}
#line 3367 "parser.tab.c"
    break;

  case 97: /* Type: OperandName  */
#line 1012 "src/parser.y"
                      {
		(yyval.nt) = new Node("Type");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_type = new BasicType(string((yyvsp[0].nt) -> current_node_data -> data_name));
		(yyval.nt)->current_node_data = new NodeData((yyval.nt)->current_type->getDataType());
	}
#line 3378 "parser.tab.c"
    break;

  case 98: /* Operand: Literal  */
#line 1021 "src/parser.y"
                {
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3389 "parser.tab.c"
    break;

  case 99: /* Operand: OperandName  */
#line 1027 "src/parser.y"
                      {
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt)->current_node_data = (yyvsp[0].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[0].nt)->current_type;
	}
#line 3400 "parser.tab.c"
    break;

  case 100: /* Operand: LEFTPARAN Expression RIGHTPARAN  */
#line 1033 "src/parser.y"
                                          {
		(yyval.nt) = new Node("Operand");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
	}
#line 3411 "parser.tab.c"
    break;

  case 101: /* OperandName: IDENTIFIER  */
#line 1042 "src/parser.y"
                   {
		(yyval.nt) = new Node("OperandName");
		(yyval.nt)->add_terminal_children(string((yyvsp[0].sval)));
		(yyval.nt)->current_node_data->value = true;
		(yyval.nt)->current_type = st->get_type(string((yyvsp[0].sval)))?st->get_type(string((yyvsp[0].sval))):new BasicType("undefined");

	}
#line 3423 "parser.tab.c"
    break;

  case 102: /* LiteralValue: LEFTBRACE RIGHTBRACE  */
#line 1052 "src/parser.y"
                             {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)-> current_node_data = new NodeData("Empty");
	}
#line 3432 "parser.tab.c"
    break;

  case 103: /* LiteralValue: LEFTBRACE ElementList RIGHTBRACE  */
#line 1056 "src/parser.y"
                                           {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt)->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-1].nt)->current_node_data;
	}
#line 3443 "parser.tab.c"
    break;

  case 104: /* LiteralValue: LEFTBRACE ElementList COMMA RIGHTBRACE  */
#line 1062 "src/parser.y"
                                                 {
		(yyval.nt) = new Node("LiteralValue");
		(yyval.nt)->add_non_terminal_children((yyvsp[-2].nt));
		(yyval.nt)->current_type = (yyvsp[-2].nt)->current_type;
		(yyval.nt)->current_node_data = (yyvsp[-2].nt)->current_node_data;
	}
#line 3454 "parser.tab.c"
    break;

  case 105: /* SliceType: LEFTSQUARE RIGHTSQUARE Type  */
#line 1070 "src/parser.y"
                                    {;}
#line 3460 "parser.tab.c"
    break;

  case 106: /* ElementList: KeyedElement  */
#line 1074 "src/parser.y"
                     {
		Node* curr = new Node("ElementList");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3472 "parser.tab.c"
    break;

  case 107: /* ElementList: ElementList COMMA KeyedElement  */
#line 1081 "src/parser.y"
                                         {
		Node* curr = new Node("ElementList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		curr->current_type = (yyvsp[-2].nt)->current_type;

		((yyval.nt)->last_current_node_data())->next_data = (yyvsp[0].nt)->current_node_data;
		((yyval.nt)->last_current_type())->next_type = (yyvsp[0].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 3490 "parser.tab.c"
    break;

  case 108: /* KeyedElement: Element  */
#line 1097 "src/parser.y"
                {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3502 "parser.tab.c"
    break;

  case 109: /* KeyedElement: Key COLON Element  */
#line 1104 "src/parser.y"
                            {
		Node* curr = new Node("KeyedElement");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3513 "parser.tab.c"
    break;

  case 110: /* Key: Expression  */
#line 1113 "src/parser.y"
                   {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3523 "parser.tab.c"
    break;

  case 111: /* Key: LiteralValue  */
#line 1118 "src/parser.y"
                       {
		Node* curr = new Node("Key");
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 3533 "parser.tab.c"
    break;

  case 112: /* Element: Expression  */
#line 1126 "src/parser.y"
                   {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3545 "parser.tab.c"
    break;

  case 113: /* Element: LiteralValue  */
#line 1133 "src/parser.y"
                       {
		Node* curr = new Node("Element");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 3557 "parser.tab.c"
    break;

  case 114: /* ReturnStmt: RETURN  */
#line 1143 "src/parser.y"
               {;}
#line 3563 "parser.tab.c"
    break;

  case 115: /* ReturnStmt: RETURN ExpressionList  */
#line 1144 "src/parser.y"
                                {;}
#line 3569 "parser.tab.c"
    break;

  case 116: /* BreakStmt: BREAK  */
#line 1149 "src/parser.y"
              {
		Node* curr = new Node("BreakStmt");
		curr->current_node_data = new NodeData (string((yyvsp[0].sval)));
		// break labels
		(yyval.nt) = curr;
	}
#line 3580 "parser.tab.c"
    break;

  case 117: /* BreakStmt: BREAK IDENTIFIER  */
#line 1155 "src/parser.y"
                           {
		Node * curr = new Node("BreakStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData (string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3592 "parser.tab.c"
    break;

  case 118: /* ContinueStmt: CONTINUE  */
#line 1167 "src/parser.y"
                 {
		Node* curr = new Node("ContinueStmt");
		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		(yyval.nt) = curr;
	}
#line 3602 "parser.tab.c"
    break;

  case 119: /* ContinueStmt: CONTINUE IDENTIFIER  */
#line 1172 "src/parser.y"
                              {
		Node* curr = new Node("ContinueStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		// check this reason
		// curr->current_node_data->node_child = $2->current_node_data;
		(yyval.nt) = curr;
	}
#line 3615 "parser.tab.c"
    break;

  case 120: /* GotoStmt: GOTO IDENTIFIER  */
#line 1183 "src/parser.y"
                        {
		Node* curr = new Node("GotoStmt");
		curr->add_terminal_children(string((yyvsp[0].sval)));
		curr->current_node_data = new NodeData(string((yyvsp[-1].sval)));
		// still remaining
		//curr->current_node_data->node_child = $2->current_node_data;
		(yyval.nt) = curr;
	}
#line 3628 "parser.tab.c"
    break;

  case 122: /* ExprSwitchStmt: SWITCH LEFTBRACE RIGHTBRACE  */
#line 1198 "src/parser.y"
                                    {;}
#line 3634 "parser.tab.c"
    break;

  case 123: /* ExprSwitchStmt: SWITCH SimpleStmt SCOLON LEFTBRACE RIGHTBRACE  */
#line 1199 "src/parser.y"
                                                        {;}
#line 3640 "parser.tab.c"
    break;

  case 124: /* ExprSwitchStmt: SWITCH Expression LEFTBRACE RIGHTBRACE  */
#line 1200 "src/parser.y"
                                                 { ;}
#line 3646 "parser.tab.c"
    break;

  case 125: /* ExprSwitchStmt: SWITCH SimpleStmt SCOLON Expression LEFTBRACE RIGHTBRACE  */
#line 1201 "src/parser.y"
                                                                   {;}
#line 3652 "parser.tab.c"
    break;

  case 126: /* ExprSwitchStmt: SWITCH LEFTBRACE ExprCaseClauseList RIGHTBRACE  */
#line 1202 "src/parser.y"
                                                        {;}
#line 3658 "parser.tab.c"
    break;

  case 127: /* ExprSwitchStmt: SWITCH SimpleStmt SCOLON LEFTBRACE ExprCaseClauseList RIGHTBRACE  */
#line 1203 "src/parser.y"
                                                                          {;}
#line 3664 "parser.tab.c"
    break;

  case 128: /* ExprSwitchStmt: SWITCH Expression LEFTBRACE ExprCaseClauseList RIGHTBRACE  */
#line 1204 "src/parser.y"
                                                                    {;}
#line 3670 "parser.tab.c"
    break;

  case 129: /* ExprSwitchStmt: SWITCH SimpleStmt SCOLON Expression LEFTBRACE ExprCaseClauseList RIGHTBRACE  */
#line 1205 "src/parser.y"
                                                                                      {;}
#line 3676 "parser.tab.c"
    break;

  case 130: /* ExprCaseClauseList: ExprCaseClauseList ExprCaseClause  */
#line 1209 "src/parser.y"
                                          {;}
#line 3682 "parser.tab.c"
    break;

  case 131: /* ExprCaseClauseList: ExprCaseClause  */
#line 1210 "src/parser.y"
                         {;}
#line 3688 "parser.tab.c"
    break;

  case 132: /* ExprCaseClause: ExprSwitchCase COLON StatementList  */
#line 1213 "src/parser.y"
                                           {;}
#line 3694 "parser.tab.c"
    break;

  case 133: /* ExprSwitchCase: CASE ExpressionList  */
#line 1217 "src/parser.y"
                            {;}
#line 3700 "parser.tab.c"
    break;

  case 134: /* ExprSwitchCase: DEFAULT  */
#line 1218 "src/parser.y"
                  {;}
#line 3706 "parser.tab.c"
    break;

  case 135: /* FallthroughStmt: FALLTHROUGH  */
#line 1222 "src/parser.y"
                    {;}
#line 3712 "parser.tab.c"
    break;

  case 136: /* IfStmt: IF Expression Block  */
#line 1226 "src/parser.y"
                            {;}
#line 3718 "parser.tab.c"
    break;

  case 137: /* IfStmt: IF SimpleStmt SCOLON Expression Block  */
#line 1227 "src/parser.y"
                                               {;}
#line 3724 "parser.tab.c"
    break;

  case 138: /* IfStmt: IF Expression Block ELSE IfStmt  */
#line 1228 "src/parser.y"
                                         {;}
#line 3730 "parser.tab.c"
    break;

  case 139: /* IfStmt: IF Expression Block ELSE Block  */
#line 1229 "src/parser.y"
                                        {;}
#line 3736 "parser.tab.c"
    break;

  case 140: /* IfStmt: IF SimpleStmt SCOLON Expression Block ELSE IfStmt  */
#line 1230 "src/parser.y"
                                                           {;}
#line 3742 "parser.tab.c"
    break;

  case 141: /* IfStmt: IF SimpleStmt SCOLON Expression Block ELSE Block  */
#line 1231 "src/parser.y"
                                                          {;}
#line 3748 "parser.tab.c"
    break;

  case 142: /* ForStmt: FOR Block  */
#line 1235 "src/parser.y"
                  {;}
#line 3754 "parser.tab.c"
    break;

  case 143: /* ForStmt: FOR ForClause Block  */
#line 1236 "src/parser.y"
                              {;}
#line 3760 "parser.tab.c"
    break;

  case 144: /* ForStmt: FOR Condition Block  */
#line 1237 "src/parser.y"
                              {;}
#line 3766 "parser.tab.c"
    break;

  case 145: /* ForStmt: FOR RangeClause Block  */
#line 1238 "src/parser.y"
                                {;}
#line 3772 "parser.tab.c"
    break;

  case 150: /* RangeClause: RANGE Expression  */
#line 1256 "src/parser.y"
                         {;}
#line 3778 "parser.tab.c"
    break;

  case 153: /* Expression: Expression MUL Expression  */
#line 1261 "src/parser.y"
                                  {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3786 "parser.tab.c"
    break;

  case 154: /* Expression: Expression QUOT Expression  */
#line 1264 "src/parser.y"
                                     {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3794 "parser.tab.c"
    break;

  case 155: /* Expression: Expression MOD Expression  */
#line 1267 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3802 "parser.tab.c"
    break;

  case 156: /* Expression: Expression SHL Expression  */
#line 1270 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3810 "parser.tab.c"
    break;

  case 157: /* Expression: Expression SHR Expression  */
#line 1273 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3818 "parser.tab.c"
    break;

  case 158: /* Expression: Expression AND Expression  */
#line 1276 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3826 "parser.tab.c"
    break;

  case 159: /* Expression: Expression ANDNOT Expression  */
#line 1279 "src/parser.y"
                                       {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3834 "parser.tab.c"
    break;

  case 160: /* Expression: Expression ADD Expression  */
#line 1282 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3842 "parser.tab.c"
    break;

  case 161: /* Expression: Expression SUB Expression  */
#line 1285 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3850 "parser.tab.c"
    break;

  case 162: /* Expression: Expression OR Expression  */
#line 1288 "src/parser.y"
                                   {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3858 "parser.tab.c"
    break;

  case 163: /* Expression: Expression XOR Expression  */
#line 1291 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3866 "parser.tab.c"
    break;

  case 164: /* Expression: Expression LOGAND Expression  */
#line 1294 "src/parser.y"
                                       {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3874 "parser.tab.c"
    break;

  case 165: /* Expression: Expression LOGOR Expression  */
#line 1297 "src/parser.y"
                                      {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3882 "parser.tab.c"
    break;

  case 166: /* Expression: Expression ISEQ Expression  */
#line 1300 "src/parser.y"
                                     {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3890 "parser.tab.c"
    break;

  case 167: /* Expression: Expression NEQ Expression  */
#line 1303 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3898 "parser.tab.c"
    break;

  case 168: /* Expression: Expression GRTEQ Expression  */
#line 1306 "src/parser.y"
                                      {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3906 "parser.tab.c"
    break;

  case 169: /* Expression: Expression GRT Expression  */
#line 1309 "src/parser.y"
                                    {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3914 "parser.tab.c"
    break;

  case 170: /* Expression: Expression LESSEQ Expression  */
#line 1312 "src/parser.y"
                                       {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3922 "parser.tab.c"
    break;

  case 171: /* Expression: Expression LESS Expression  */
#line 1315 "src/parser.y"
                                     {
		//cout<<"Express: "<<$1<<" "<<$2<<" "<<$3<<endl;
		}
#line 3930 "parser.tab.c"
    break;

  case 172: /* Expression: UnaryExpr  */
#line 1318 "src/parser.y"
                    {
		//cout<<"Unary Expr begins from expression" <<endl;
		}
#line 3938 "parser.tab.c"
    break;

  case 173: /* UnaryExpr: MUL UnaryExpr  */
#line 1325 "src/parser.y"
                      {
		Node* curr = new Node("UnaryExpr");
		curr->add_terminal_children((yyvsp[-1].sval));
		curr->add_non_terminal_children((yyvsp[0].nt));
// remaining: Please check if this datatype correct. In all unary expressions!
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = new NodeData("unary " + string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
#line 3954 "parser.tab.c"
    break;

  case 174: /* UnaryExpr: AND UnaryExpr  */
#line 1336 "src/parser.y"
                        {
		Node* curr = new Node("UnaryExpr");
		curr->add_terminal_children((yyvsp[-1].sval));
		curr->add_non_terminal_children((yyvsp[0].nt));
// remaining: Please check if this datatype correct. In all unary expressions!
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = new NodeData("unary " + string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
#line 3970 "parser.tab.c"
    break;

  case 175: /* UnaryExpr: ADD UnaryExpr  */
#line 1347 "src/parser.y"
                        {
		Node* curr = new Node("UnaryExpr");
		curr->add_terminal_children((yyvsp[-1].sval));
		curr->add_non_terminal_children((yyvsp[0].nt));
// remaining: Please check if this datatype correct. In all unary expressions!
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = new NodeData("unary " + string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
#line 3986 "parser.tab.c"
    break;

  case 176: /* UnaryExpr: SUB UnaryExpr  */
#line 1358 "src/parser.y"
                        {
		Node* curr = new Node("UnaryExpr");
		curr->add_terminal_children((yyvsp[-1].sval));
		curr->add_non_terminal_children((yyvsp[0].nt));
// remaining: Please check if this datatype correct. In all unary expressions!
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = new NodeData("unary " + string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
#line 4002 "parser.tab.c"
    break;

  case 177: /* UnaryExpr: NOT UnaryExpr  */
#line 1369 "src/parser.y"
                        {
		Node* curr = new Node("UnaryExpr");
		curr->add_terminal_children((yyvsp[-1].sval));
		curr->add_non_terminal_children((yyvsp[0].nt));
// remaining: Please check if this datatype correct. In all unary expressions!
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = new NodeData("unary " + string((yyvsp[-1].sval)));
		curr->current_node_data->node_child = (yyvsp[0].nt)->current_node_data;
		(yyval.nt) = curr;
		//cout<<"UnaryExpr "<<$1<<" "<<$2<<endl;
		}
#line 4018 "parser.tab.c"
    break;

  case 178: /* UnaryExpr: PrimaryExpr  */
#line 1380 "src/parser.y"
                      {
		Node* curr = new Node("PrimaryExpr");
		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr = (yyval.nt);
		//cout<<"Primary begins from unary\n";
		}
#line 4030 "parser.tab.c"
    break;

  case 179: /* PrimaryExpr: Operand  */
#line 1392 "src/parser.y"
                 {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 4042 "parser.tab.c"
    break;

  case 180: /* PrimaryExpr: MakeExpr  */
#line 1399 "src/parser.y"
                   {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[0].nt));
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 4054 "parser.tab.c"
    break;

  case 181: /* PrimaryExpr: PrimaryExpr Selector  */
#line 1406 "src/parser.y"
                               {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		// still remaining
		// curr->current_type = isValidMemberon($1->current_type)
		(yyval.nt) = curr;
	}
#line 4067 "parser.tab.c"
    break;

  case 182: /* PrimaryExpr: PrimaryExpr Index  */
#line 1414 "src/parser.y"
                            {cout<<"PrimaryExpr:Index\n";}
#line 4073 "parser.tab.c"
    break;

  case 183: /* PrimaryExpr: PrimaryExpr Slice  */
#line 1415 "src/parser.y"
                            {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4084 "parser.tab.c"
    break;

  case 184: /* PrimaryExpr: PrimaryExpr Arguments  */
#line 1421 "src/parser.y"
                                {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		// still remaining
		// curr->add_non_terminal_children($2);
		(yyval.nt) = curr;
	}
#line 4096 "parser.tab.c"
    break;

  case 185: /* PrimaryExpr: OperandName StructLiteral  */
#line 1428 "src/parser.y"
                                    {cout<<"PrimaryExpr:StructLiteral\n";}
#line 4102 "parser.tab.c"
    break;

  case 186: /* PrimaryExpr: PrimaryExpr TypeAssertion  */
#line 1429 "src/parser.y"
                                    {
		Node* curr = new Node("PrimaryExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		// still remaining
		// curr->add_non_terminal_children($2);
		(yyval.nt) = curr;
	}
#line 4114 "parser.tab.c"
    break;

  case 187: /* StructLiteral: LEFTBRACE KeyValueList RIGHTBRACE  */
#line 1439 "src/parser.y"
                                          {
		Node* curr = new Node("StructLiteral");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4124 "parser.tab.c"
    break;

  case 188: /* KeyValueList: Expression COLON Expression  */
#line 1447 "src/parser.y"
                                    {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4135 "parser.tab.c"
    break;

  case 189: /* KeyValueList: Expression COLON Expression COMMA KeyValueList  */
#line 1453 "src/parser.y"
                                                         {
		Node* curr = new Node("KeyValueList");
		curr->add_non_terminal_children((yyvsp[-4].nt));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));
		(yyval.nt) = curr;
	}
#line 4147 "parser.tab.c"
    break;

  case 190: /* Selector: DOT IDENTIFIER  */
#line 1464 "src/parser.y"
                       {
		Node* curr = new Node("Selector");
		curr->add_terminal_children((yyvsp[0].sval));

		curr->current_node_data = new NodeData(string((yyvsp[0].sval)));

		(yyval.nt) = curr;
	}
#line 4160 "parser.tab.c"
    break;

  case 191: /* Index: LEFTSQUARE Expression RIGHTSQUARE  */
#line 1475 "src/parser.y"
                                          {
		Node* curr = new Node("Index");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 4174 "parser.tab.c"
    break;

  case 192: /* Slice: LEFTSQUARE COLON Expression RIGHTSQUARE  */
#line 1487 "src/parser.y"
                                                 {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		// still ramining
		// curr->add_non_terminal_children($3);
		(yyval.nt) = curr;
	}
#line 4186 "parser.tab.c"
    break;

  case 193: /* Slice: LEFTSQUARE COLON RIGHTSQUARE  */
#line 1494 "src/parser.y"
                                        {
		Node* curr = new Node("Slice");
		(yyval.nt) = curr;
	}
#line 4195 "parser.tab.c"
    break;

  case 194: /* Slice: LEFTSQUARE Expression COLON RIGHTSQUARE  */
#line 1498 "src/parser.y"
                                                    {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));
		(yyval.nt) = curr;
	}
#line 4206 "parser.tab.c"
    break;

  case 195: /* Slice: LEFTSQUARE Expression COLON Expression RIGHTSQUARE  */
#line 1504 "src/parser.y"
                                                              {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4218 "parser.tab.c"
    break;

  case 196: /* Slice: LEFTSQUARE COLON Expression COLON Expression RIGHTSQUARE  */
#line 1511 "src/parser.y"
                                                                    {
		Node* curr = new Node("Slice");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4231 "parser.tab.c"
    break;

  case 197: /* Slice: LEFTSQUARE Expression COLON Expression COLON Expression RIGHTSQUARE  */
#line 1519 "src/parser.y"
                                                                               {
		Node* curr = new Node("Slice");
		curr->add_non_terminal_children((yyvsp[-5].nt));
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_terminal_children(string((yyvsp[-2].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4245 "parser.tab.c"
    break;

  case 198: /* MakeExpr: MAKE LEFTPARAN Type COMMA Expression COMMA Expression RIGHTPARAN  */
#line 1532 "src/parser.y"
                                                                         {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-5].nt));
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-5].nt)->current_type;
		curr->current_node_data = new NodeData("Make");
		(yyval.nt) = curr;
	}
#line 4260 "parser.tab.c"
    break;

  case 199: /* MakeExpr: MAKE LEFTPARAN Type COMMA Expression RIGHTPARAN  */
#line 1542 "src/parser.y"
                                                          {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-3].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-3].nt)->current_type;
		curr->current_node_data = new NodeData("Make");
		(yyval.nt) = curr;
	}
#line 4274 "parser.tab.c"
    break;

  case 200: /* MakeExpr: MAKE LEFTPARAN Type RIGHTPARAN  */
#line 1551 "src/parser.y"
                                         {
		Node* curr = new Node("MakeExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = (yyvsp[-1].nt)->current_type;
		curr->current_node_data = new NodeData("Make");
		(yyval.nt) = curr;
	}
#line 4287 "parser.tab.c"
    break;

  case 201: /* MakeExpr: NEW LEFTPARAN Type RIGHTPARAN  */
#line 1559 "src/parser.y"
                                        {
		Node* curr = new Node("NewExpr");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_type = new PointerType((yyvsp[-1].nt)->current_type);
		curr->current_node_data = new NodeData("New");
		(yyval.nt) = curr;
	}
#line 4300 "parser.tab.c"
    break;

  case 202: /* TypeAssertion: DOT LEFTPARAN Type RIGHTPARAN  */
#line 1570 "src/parser.y"
                                      {
		Node* curr = new Node("TypeAssertion");
		curr->add_non_terminal_children((yyvsp[-1].nt));
		(yyval.nt) = curr;
	}
#line 4310 "parser.tab.c"
    break;

  case 203: /* Arguments: LEFTPARAN RIGHTPARAN  */
#line 1578 "src/parser.y"
                             {
		Node* curr = new Node("Arguments");
		(yyval.nt) = curr;
	}
#line 4319 "parser.tab.c"
    break;

  case 204: /* Arguments: LEFTPARAN ExpressionList RIGHTPARAN  */
#line 1582 "src/parser.y"
                                              {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4333 "parser.tab.c"
    break;

  case 205: /* Arguments: LEFTPARAN ExpressionList ELIPSIS RIGHTPARAN  */
#line 1591 "src/parser.y"
                                                      {
		Node* curr = new Node("Arguments");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_terminal_children(string((yyvsp[-1].sval)));

		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;
		curr->current_type = (yyvsp[-2].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4348 "parser.tab.c"
    break;

  case 206: /* ExpressionList: Expression  */
#line 1605 "src/parser.y"
                   {
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4362 "parser.tab.c"
    break;

  case 207: /* ExpressionList: ExpressionList COMMA Expression  */
#line 1614 "src/parser.y"
                                          {
		Node* curr = new Node("ExpressionList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		curr->current_type = (yyvsp[0].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4377 "parser.tab.c"
    break;

  case 208: /* TypeDecl: TYPE LEFTPARAN TypeSpecList RIGHTPARAN  */
#line 1627 "src/parser.y"
                                               {;}
#line 4383 "parser.tab.c"
    break;

  case 209: /* TypeDecl: TYPE TypeSpec  */
#line 1628 "src/parser.y"
                        {;}
#line 4389 "parser.tab.c"
    break;

  case 214: /* AliasDecl: IDENTIFIER ASSGN_OP Type  */
#line 1642 "src/parser.y"
                                 {;}
#line 4395 "parser.tab.c"
    break;

  case 215: /* TypeDef: IDENTIFIER Type  */
#line 1646 "src/parser.y"
                        {;}
#line 4401 "parser.tab.c"
    break;

  case 216: /* MapType: MAP LEFTSQUARE Type RIGHTSQUARE Type  */
#line 1650 "src/parser.y"
                                             {
		Node* curr = new Node("MapType");
		curr->add_terminal_children(string((yyvsp[-4].sval)));
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		DataType *key, *value;
		key = (yyvsp[-2].nt)->current_type;
		value = (yyvsp[0].nt)->current_type;

		curr->current_type = new MapType(key,value);
		(yyval.nt) = curr;
	}
#line 4419 "parser.tab.c"
    break;

  case 217: /* StructType: STRUCT LEFTBRACE FieldDeclList RIGHTBRACE  */
#line 1666 "src/parser.y"
                                                  {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-3].sval)));
		curr->add_non_terminal_children((yyvsp[-1].nt));

		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;

		(yyval.nt) = curr;
	}
#line 4434 "parser.tab.c"
    break;

  case 218: /* StructType: STRUCT LEFTBRACE RIGHTBRACE  */
#line 1677 "src/parser.y"
                                      {
		Node* curr = new Node("StructType");
		curr->add_terminal_children(string((yyvsp[-2].sval)));

		//map< string, DataType*> mem = new map< string, DataType*>;
		curr->current_type = new StructType(*(new map<string,DataType*>));

		(yyval.nt) = curr;
	}
#line 4448 "parser.tab.c"
    break;

  case 219: /* FieldDeclList: FieldDecl SCOLON  */
#line 1689 "src/parser.y"
                         {
		Node* curr = new Node("FieldDeclList");
		curr->current_node_data = (yyvsp[-1].nt)->current_node_data;
		curr->current_type = (yyvsp[-1].nt)->current_type;
		(yyval.nt) = curr;
	}
#line 4459 "parser.tab.c"
    break;

  case 220: /* FieldDeclList: FieldDeclList FieldDecl SCOLON  */
#line 1695 "src/parser.y"
                                         {
		Node* curr = new Node("FieldDeclList");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->current_node_data = (yyvsp[-2].nt)->current_node_data;

		map< string, DataType*> mem1 = ((StructType*)(yyvsp[-2].nt)->current_type)->data_of_struct;
		map< string, DataType*> mem2 = ((StructType*)(yyvsp[-1].nt)->current_type)->data_of_struct;

		for(auto& it: mem2) {
            string key = it.first;
			DataType* value = it.second->copyClass();
//            if(mem1.find(key) == mem1.end()) {
// Remaining                ERROR_N("Redeclaration of struct member: ", key, @2);
//            }
			mem1[key] = value;
        }
        curr->current_type = new StructType(mem1);
		(yyval.nt) = curr;
	}
#line 4484 "parser.tab.c"
    break;

  case 221: /* FieldDecl: IdentifierList Type String  */
#line 1719 "src/parser.y"
                                   {
		Node* curr = new Node("FieldDecl");
		curr->add_non_terminal_children((yyvsp[-2].nt));
		curr->add_non_terminal_children((yyvsp[-1].nt));
		curr->add_non_terminal_children((yyvsp[0].nt));

		DataType* tp = (yyvsp[-1].nt)->current_type;
//		tp->next = NULL;

		NodeData* lp = (yyvsp[-2].nt)->current_node_data;



		(yyval.nt) = curr;
		}
#line 4504 "parser.tab.c"
    break;

  case 223: /* PointerType: MUL BaseType  */
#line 1739 "src/parser.y"
                     {
		Node* curr = new Node("PointerType");
		curr->add_terminal_children((yyvsp[-1].sval));
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;


		(yyval.nt) = curr;
	}
#line 4520 "parser.tab.c"
    break;

  case 224: /* BaseType: Type  */
#line 1753 "src/parser.y"
            {
		Node* curr = new Node("BaseType");
		curr->add_non_terminal_children((yyvsp[0].nt));

		curr->current_type = (yyvsp[0].nt)->current_type;
		curr->current_node_data = (yyvsp[0].nt)->current_node_data;

		(yyval.nt) = curr;
	}
#line 4534 "parser.tab.c"
    break;

  case 225: /* ArrayType: LEFTSQUARE Expression RIGHTSQUARE Type  */
#line 1765 "src/parser.y"
                                               {
		 Node* curr = new Node("ArrayType");
		 curr->add_non_terminal_children((yyvsp[-2].nt));
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 if((yyvsp[-2].nt)->current_type->getDataType() == "int"){
//			 curr->current_type = new ArrayType
		 }
		 (yyval.nt) = curr;
		 }
#line 4548 "parser.tab.c"
    break;

  case 226: /* Literal: BasicLit  */
#line 1777 "src/parser.y"
                 {
		 Node* curr = new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 (yyval.nt) = curr;
		 }
#line 4560 "parser.tab.c"
    break;

  case 227: /* Literal: CompositeLit  */
#line 1784 "src/parser.y"
                     {
		 Node* curr =new Node("Literal");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = (yyvsp[0].nt)->current_type;
		 (yyval.nt) = curr;
		 }
#line 4572 "parser.tab.c"
    break;

  case 228: /* BasicLit: INTEGER_VAL  */
#line 1794 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("int");
		 (yyval.nt) = curr;
		 }
#line 4584 "parser.tab.c"
    break;

  case 229: /* BasicLit: FLOAT_VAL  */
#line 1801 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("float");
		 (yyval.nt) = curr;
		 }
#line 4596 "parser.tab.c"
    break;

  case 230: /* BasicLit: BYTE_VAL  */
#line 1808 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children((yyvsp[0].sval));
		 curr->current_node_data = new NodeData(string((yyvsp[0].sval)));
		 curr->current_type = new BasicType("byte");
		 (yyval.nt) = curr;
		 }
#line 4608 "parser.tab.c"
    break;

  case 231: /* BasicLit: String  */
#line 1815 "src/parser.y"
                 {
		 Node* curr = new Node("BasicLit");
		 curr->add_non_terminal_children((yyvsp[0].nt));
		 curr->current_node_data = (yyvsp[0].nt)->current_node_data;
		 curr->current_type = new BasicType("string");
		 (yyval.nt) = curr;
		 }
#line 4620 "parser.tab.c"
    break;

  case 232: /* BasicLit: TRUE  */
#line 1822 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
		 }
#line 4632 "parser.tab.c"
    break;

  case 233: /* BasicLit: FALSE  */
#line 1829 "src/parser.y"
                    {
		 Node* curr = new Node("BasicLit");
		 curr->add_terminal_children(string((yyvsp[0].sval)));
		 curr->current_node_data = new NodeData((yyvsp[0].sval));
		 curr->current_type = new BasicType("bool");
		 (yyval.nt) = curr;
		 }
#line 4644 "parser.tab.c"
    break;

  case 234: /* String: RAW_STRING  */
#line 1839 "src/parser.y"
                   { Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 (yyval.nt) = curr;}
#line 4653 "parser.tab.c"
    break;

  case 235: /* String: INTERPRETED_STRING  */
#line 1843 "src/parser.y"
                             { Node* curr = new Node("String");
			 curr->add_terminal_children(string((yyvsp[0].sval)));
			 curr->current_node_data = new NodeData((yyvsp[0].sval));
			 (yyval.nt) = curr;}
#line 4662 "parser.tab.c"
    break;


#line 4666 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 1849 "src/parser.y"






int main (int argc, char **argv) {

	yyin = fopen(argv[1], "r");	//taking input as argument
	yyparse ( );
	cout<<"THE GIVEN FILE WAS PARSABLE \n";

}
