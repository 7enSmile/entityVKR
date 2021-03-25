#ifndef _DEPARTMENT_HEAD_UNIVERSITY_H_
#define _DEPARTMENT_HEAD_UNIVERSITY_H_

class Person;
class Department;

class DEPARTMENT_EXPORT Head_university
{

   QX_REGISTER_FRIEND_CLASS(Head_university)

public:

   typedef std::shared_ptr<Person> type_persone;
   typedef std::shared_ptr<Department> type_department;

protected:

   long m_Head_university_id;
   type_persone m_persone;
   type_department m_department;

public:

   Head_university();
   Head_university(const long & id);
   virtual ~Head_university();

   long getHead_university_id() const;
   type_persone getpersone() const;
   type_department getdepartment() const;

   void setHead_university_id(const long & val);
   void setpersone(const type_persone & val);
   void setdepartment(const type_department & val);

   type_persone getpersone(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);
   type_department getdepartment(bool bLoadFromDatabase, const QString & sAppendRelations = QString(), QSqlDatabase * pDatabase = NULL, QSqlError * pDaoError = NULL);

public:

   static QString relation_persone(bool key = false) { return (key ? QString("persone") : QString("persone_id")); }
   static QString relation_department(bool key = false) { return (key ? QString("department") : QString("department_id")); }

public:

   static QString column_Head_university_id(bool key = false) { Q_UNUSED(key); return "Head_university_id"; }

public:

   static QString table_name(bool key = false) { return (key ? QString("Head_university") : QString("t_Head_university")); }

};

typedef std::shared_ptr<Head_university> Head_university_ptr;
typedef qx::QxCollection<long, Head_university_ptr> list_of_Head_university;
typedef std::shared_ptr<list_of_Head_university> list_of_Head_university_ptr;

QX_REGISTER_COMPLEX_CLASS_NAME_HPP_DEPARTMENT(Head_university, qx::trait::no_base_class_defined, 0, Head_university)

#include "../include/Person.gen.h"
#include "../include/Department.gen.h"



#endif // _DEPARTMENT_HEAD_UNIVERSITY_H_
