/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Federal University of Juiz de Fora - (UFJF)
 */

#ifndef C_CLASS_H
#define C_CLASS_H

namespace ns3 {

class CClass : public
{
public:
  CClass ();             //!< Default constructor
  virtual ~CClass ();   //!< Dummy destructor, see DoDispose;

  /*
   * Register this type
   * \return the object TypeId.
   */
  static TypeId GetTypeId (void);

protected:
  /** Destructor implementation. */
  virtual void DoDispose (void);

  //Inherited from ObjectBase
  virtual void NotifyContructionCompleted (void);

private:
  ObjectFactory m_factory; //!< Factory for testing.
  Ptr<AClass> m_obj;
  int16_t m_integer;
};
} //namespace ns3
#endif // C_CLASS_H

