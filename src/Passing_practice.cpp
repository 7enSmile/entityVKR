#include "../include/department_precompiled_header.h"

#include "../include/Passing_practice.h"
#include "../include/Practice.h"
#include "../include/Student.h"
#include "../include/Head_employer.h"
#include "../include/Head_university.h"

#include <QxOrm_Impl.h>

QX_REGISTER_COMPLEX_CLASS_NAME_CPP_DEPARTMENT(PassingPractice, PassingPractice)

namespace qx {

template <>
void register_class(QxClass<PassingPractice> & t)
{
   qx::IxDataMember * pData = NULL; Q_UNUSED(pData);
   qx::IxSqlRelation * pRelation = NULL; Q_UNUSED(pRelation);
   qx::IxFunction * pFct = NULL; Q_UNUSED(pFct);
   qx::IxValidator * pValidator = NULL; Q_UNUSED(pValidator);

   t.setName("t_Passing_practice");

   pData = t.id(& PassingPractice::m_Passing_practice_id, "Passing_practice_id", 0);

   pData = t.data(& PassingPractice::m_beginning, "beginning", 0, true, true);
   pData = t.data(& PassingPractice::m_ending, "ending", 0, true, true);

   pRelation = t.relationManyToOne(& PassingPractice::m_practice, "practice", 0);
   pRelation->getDataMember()->setName("practice_id");

   pRelation = t.relationManyToOne(& PassingPractice::m_head_employer_id, "head_employer_id", 0);
   pRelation->getDataMember()->setName("head_employer_id");
   pRelation = t.relationManyToOne(& PassingPractice::m_head_university_id, "head_university_id", 0);
   pRelation->getDataMember()->setName("head_university_id");
   pRelation = t.relationManyToOne(& PassingPractice::m_task, "task", 0);
   pRelation->getDataMember()->setName("Task_id");
   pRelation = t.relationManyToOne(& PassingPractice::m_employer, "employer", 0);
   pRelation->getDataMember()->setName("employer_id");
   pRelation = t.relationManyToOne(& PassingPractice::m_studen, "studen", 0);
   pRelation->getDataMember()->setName("Student_id");
   pRelation = t.relationManyToOne(& PassingPractice::m_Report, "Report_id", 0);
   pRelation = t.relationOneToOne(& PassingPractice::m_practice_result, "Practice_result", 0);

   qx::QxValidatorX<PassingPractice> * pAllValidator = t.getAllValidator(); Q_UNUSED(pAllValidator);
}

} // namespace qx

PassingPractice::PassingPractice() : m_Passing_practice_id(0) { ; }

PassingPractice::PassingPractice(const long & id) : m_Passing_practice_id(id) { ; }

PassingPractice::~PassingPractice() { ; }

long PassingPractice::getPassingPractice_id() const { return m_Passing_practice_id; }

QDate PassingPractice::getbeginning() const { return m_beginning; }

QDate PassingPractice::getending() const { return m_ending; }

PassingPractice::type_practice PassingPractice::getpractice() const { return m_practice; }



PassingPractice::Task_ptr PassingPractice::gettask() const { return m_task; }

PassingPractice::Employer_ptr PassingPractice::getemployer() const { return m_employer; }

PassingPractice::Student_ptr PassingPractice::getstuden() const { return m_studen; }



PassingPractice::HeadEmployer_ptr PassingPractice::gethead_employer() const { return m_head_employer_id; }

PassingPractice::HeadUniversity_ptr PassingPractice::gethead_university() const { return m_head_university_id; }

PassingPractice::Report_ptr PassingPractice::getReport() const { return m_Report; }

PassingPractice::PracticeResult_ptr PassingPractice::getpractice_result() const { return m_practice_result; }


void PassingPractice::setpassing_practice(const long & val) { m_Passing_practice_id = val; }

void PassingPractice::setbeginning(const QDate & val) { m_beginning = val; }

void PassingPractice::setending(const QDate & val) { m_ending = val; }

void PassingPractice::setpractice(const PassingPractice::type_practice & val) { m_practice = val; }



void PassingPractice::sethead_employer(const PassingPractice::HeadEmployer_ptr & val) { m_head_employer_id = val; }

void PassingPractice::sethead_university(const PassingPractice::HeadUniversity_ptr & val) { m_head_university_id = val; }

void PassingPractice::settask(const PassingPractice::Task_ptr & val) { m_task = val; }

void PassingPractice::setemployer(const PassingPractice::Employer_ptr & val) { m_employer = val; }

void PassingPractice::setstuden(const PassingPractice::Student_ptr & val) { m_studen = val; }

void PassingPractice::setreport(const PassingPractice::Report_ptr & val) { m_Report = val; }

void PassingPractice::setpractice_result(const PassingPractice::PracticeResult_ptr & val) { m_practice_result = val; }

PassingPractice::type_practice PassingPractice::getpractice(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getpractice(); }
   QString sRelation = "{PassingPractice_id} | practice";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   PassingPractice tmp;
   tmp.m_Passing_practice_id = this->m_Passing_practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_practice = tmp.m_practice; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_practice;
}



PassingPractice::HeadEmployer_ptr PassingPractice::gethead_employer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return gethead_employer(); }
   QString sRelation = "{PassingPractice_id} | head_employer_id";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   PassingPractice tmp;
   tmp.m_Passing_practice_id = this->m_Passing_practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_head_employer_id = tmp.m_head_employer_id; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_head_employer_id;
}

PassingPractice::HeadUniversity_ptr PassingPractice::gethead_university(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return gethead_university(); }
   QString sRelation = "{PassingPractice_id} | head_university_id";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   PassingPractice tmp;
   tmp.m_Passing_practice_id = this->m_Passing_practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_head_university_id = tmp.m_head_university_id; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_head_university_id;
}
PassingPractice::Task_ptr PassingPractice::gettask(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return gettask(); }
   QString sRelation = "{PassingPractice_id} | task";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   PassingPractice tmp;
   tmp.m_Passing_practice_id = this->m_Passing_practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_task = tmp.m_task; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_task;
}

PassingPractice::Employer_ptr PassingPractice::getemployer(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getemployer(); }
   QString sRelation = "{PassingPractice_id} | employer";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   PassingPractice tmp;
   tmp.m_Passing_practice_id = this->m_Passing_practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_employer = tmp.m_employer; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_employer;
}

PassingPractice::Student_ptr PassingPractice::getstuden(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getstuden(); }
   QString sRelation = "{PassingPractice_id} | studen";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   PassingPractice tmp;
   tmp.m_Passing_practice_id = this->m_Passing_practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_studen = tmp.m_studen; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_studen;
}

PassingPractice::Report_ptr PassingPractice::getreport(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getReport(); }
   QString sRelation = "{PassingPractice_id} | Report";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   PassingPractice tmp;
   tmp.m_Passing_practice_id = this->m_Passing_practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_Report = tmp.m_Report; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_Report;
}

PassingPractice::PracticeResult_ptr PassingPractice::getpractice_result(bool bLoadFromDatabase, const QString & sAppendRelations /* = QString() */, QSqlDatabase * pDatabase /* = NULL */, QSqlError * pDaoError /* = NULL */)
{
   if (pDaoError) { (* pDaoError) = QSqlError(); }
   if (! bLoadFromDatabase) { return getpractice_result(); }
   QString sRelation = "{PassingPractice_id} | Practice_result";
   if (! sAppendRelations.isEmpty() && ! sAppendRelations.startsWith("->") && ! sAppendRelations.startsWith(">>")) { sRelation += "->" + sAppendRelations; }
   else if (! sAppendRelations.isEmpty()) { sRelation += sAppendRelations; }
   PassingPractice tmp;
   tmp.m_Passing_practice_id = this->m_Passing_practice_id;
   QSqlError daoError = qx::dao::fetch_by_id_with_relation(sRelation, tmp, pDatabase);
   if (! daoError.isValid()) { this->m_practice_result = tmp.m_practice_result; }
   if (pDaoError) { (* pDaoError) = daoError; }
   return m_practice_result;
}

